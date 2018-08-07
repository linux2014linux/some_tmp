//
// Created by ll on 18年1月16日.
//

#include <time.h>
#include <unistd.h>

#include <gflags/gflags.h>
#include <butil/file_util.h>
#include <butil/logging.h>
#include <butil/at_exit.h>
#include <butil/time.h>
#include <iostream>

DEFINE_string(log_file, "log2file.log", "Server log file");
DEFINE_string(log_dir, "/home/ll/study/brpc/00_common_tool/logging_using/log/", "Server log path");

int main(int argc, char* argv[]) {

    ::logging::LoggingSettings logging_settings;
    logging_settings.logging_dest = ::logging::LOG_TO_FILE;
    logging_settings.log_file = (const ::logging::PathChar*)(FLAGS_log_dir + FLAGS_log_file).c_str();
    butil::CreateDirectory(butil::FilePath(FLAGS_log_dir));

    std::cout << (FLAGS_log_dir + FLAGS_log_file) << std::endl;
    std::cout << logging_settings.log_file << std::endl;
    if (!::logging::InitLogging(logging_settings)) {
        PLOG(ERROR) << "Failed to init logging with log_dir(GFLAG) "
                   << FLAGS_log_dir << " and log_file(GFLAG) "
                   << FLAGS_log_file;
        return 1;
    }

    return 0;
}
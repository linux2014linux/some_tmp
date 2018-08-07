//
// Created by ll on 18年1月12日.
//

#include <time.h>
#include <unistd.h>

#include <butil/time.h>
#include <iostream>

int main(int argc, char* argv[]) {

    butil::Timer timer(butil::Timer::STARTED);
    sleep(1);
    timer.stop();
    std::cout << "consttime=" << timer.u_elapsed() << "us" << std::endl;

    return 0;
}

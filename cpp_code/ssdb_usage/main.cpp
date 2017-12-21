#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>

#include "SSDB_client.h"

int main(int argc, char* argv[]) {

    const char *ip = (argc >= 2)? argv[1] : "127.0.0.1";
    int port = (argc >= 3)? atoi(argv[2]) : 8888;

    ssdb::Client *client = ssdb::Client::connect(ip, port);
    if (client == NULL) {
        std::cout << "" << std::endl;
        return 0;
    }

    ssdb::Status s;
    /*
    s = client->set("k", "hello ssdb!");
    */
    std::string str_key = "k";
    std::string str_value;
    s = client->get(str_key, &str_value);
    if (s.ok()) {
        std::cout << "k->" << str_value << std::endl;
    } else {
        std::cout << "error! " << s.code() << std::endl;
    }

    delete client;

    return 0;
}

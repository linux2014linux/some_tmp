#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    std::string vid = "6457479851916881770";
    std::string uid = "1304391530";

    std::cout << vid << "->" << strtoull(vid.c_str(), NULL, 10) << std::endl;
    std::cout << uid << "->" << strtoul(uid.c_str(), NULL, 10) << std::endl;
    std::cout << uid << "->" << strtoul(uid.c_str(), NULL, 2) << std::endl;

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <map>

int main(int argc, char* argv[]) {
    std::map<int, std::string> tmp;
    tmp[38] = "asdf";
    tmp[3] = "asdf";
    tmp[48] = "asdf";
    tmp[18] = "asdf";

    std::map<int, std::string>::iterator itr = tmp.begin();
    for (; itr != tmp.end(); itr++) {
        std::cout << itr->first << ", " << itr->second << std::endl;
    }


    return 0;
}

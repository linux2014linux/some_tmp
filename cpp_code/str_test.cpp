#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char* argv[]) {
    std::string flags;
    std::string product = "RUQ2_234234";
    std::string newkey = product.replace(0, 4, "LIKE_DISP");
    
    std::cout << product << std::endl;
    std::cout << newkey << std::endl;

    return 0;
}

#include <iostream>
#include <stdio.h>

void func2(int &b) {
    b = 10;
}

void func1(int& a) {
    a = 99;
    func2(a);
}

int main(int argc, char* argv[]) {

    int a = 100;
    func1(a);
    std::cout << a << std::endl;

    return 0;
}

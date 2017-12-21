#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <set>

int main(int argc, char* argv[]) {
    std::set<int> test_set;
    test_set.insert(3);
    test_set.insert(1);
    test_set.insert(99);
    test_set.insert(10);
    test_set.insert(77);

    std::set<int>::iterator set_itr = test_set.begin();
    for (; set_itr != test_set.end(); set_itr++) {
        std::cout << *set_itr << ", ";
        // test_set.erase(*set_itr++);
    }
    // test_set.erase(set_itr, test_set.end());

    return 0;
}

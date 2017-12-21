#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/unordered_set.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

class A {
public:
    A(uint64_t a) : uid(a) {}
    uint64_t uid;
};

int main(int argc, char* argv[])
{

    /*
    boost::shared_ptr<A> ptra(new A(100));
    if (!ptra) {
        std::cout << "not init" << std::endl;
    } else {
        std::cout << "this is ok!" << std::endl;
    }

    boost::shared_ptr<A> ptrb;
    if (!ptrb) {
        std::cout << "not init" << std::endl;
    } else {
        std::cout << "this is ok!" << std::endl;
    }*/
    boost::unordered_set<int> _hash;
    _hash.insert(23);
    _hash.insert(34);
    _hash.insert(65);
    _hash.insert(23);
    _hash.insert(9);

    std::cout << (_hash.find(54)==_hash.end());
    std::cout << (_hash.find(65)==_hash.end());
    std::cout << (_hash.find(23)==_hash.end());

    return 0;
}

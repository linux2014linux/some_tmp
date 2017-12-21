#include "demo.pb.h"
#include <iostream>
#include <string>
#include <vector>
#include <functional>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/lexical_cast.hpp>

#include <boost/random.hpp>
#include <boost/generator_iterator.hpp>

#include <boost/random/linear_congruential.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/uniform_real.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/generator_iterator.hpp>

class A {
public:
    // 多态virtua类型才会追溯实体实现,一旦析构函数非virtual
    // 在delete A时,只有A的析构函数会被调用,B就不被释放,如果
    // B申请了new空间,那么将会造成内存泄漏
    virtual ~A(){}
    virtual void func1() = 0;
    virtual void func2() = 0;
};

class B : public A {
public:
    B() : _age(new int) {
    }

    ~B() {
        std::cout << "B free" << std::endl;
    }

    void func1() {
        std::cout << "B::func1" << std::endl;
    }

    void func2() {
        std::cout << "B::func2" << std::endl;
    }
private:
    boost::shared_ptr<int> _age;
};

class C {
    public:
        C() {}
        ~C() {
            std::cout << "C delete" << std::endl;
        }
};

class D : public C{
    public:
        D() {}
        ~D() {
            std::cout << "D delete" << std::endl;
        }
};

int main(int argc, char* argv[]) {

    {
        A* a = new B();
        a->func1();
        delete a;
    }

    {
        C* c = new D();
        delete c;
    }

    return 0;
}

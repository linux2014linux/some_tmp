#include <iostream>
#include <string>
#include <vector>

class Demo {
    public:
        int age;
};

void copy_test(Demo** p_demo, Demo demo) {
    /*
    p_demo->age = demo.age;
    demo.age = 100;
    */

    Demo* demo_1 = new Demo();
    demo_1->age = 100;
    *p_demo = demo_1;
}

int main(int argc, char* argv[]) {

    Demo* p_demo = new Demo();

    Demo demo;
    demo.age = 10;

    copy_test(&p_demo, demo);

    std::cout << p_demo->age << std::endl;

    return 0;
}

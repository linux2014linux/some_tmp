#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Stu {
public:
    Stu() {
    }

    Stu(int age, std::string name) : m_age(age), m_name(name) {
    }

    ~Stu() {
    }

public:
    int m_age;
    std::string m_name;
};

bool compare_stu(Stu ele1, Stu ele2) {
    return (ele1.m_age > ele2.m_age);
}

int main(int argc, char* argv[]) {
    Stu stu1(23, "zhangsan");
    Stu stu2(31, "alice");
    Stu stu3(57, "jack");
    Stu stu4(12, "bob");
    Stu stu5(38, "wangwu");

    std::vector<Stu> stus;
    stus.push_back(stu1);
    stus.push_back(stu2);
    stus.push_back(stu3);
    stus.push_back(stu4);
    stus.push_back(stu5);

    for (std::vector<Stu>::iterator it = stus.begin(); it != stus.end(); it++) {
        std::cout << it->m_age << ", " << it->m_name << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;

    std::sort(stus.begin(), stus.end(), compare_stu);
    for (std::vector<Stu>::iterator it = stus.begin(); it != stus.end(); it++) {
        std::cout << it->m_age << ", " << it->m_name << std::endl;
    }

    return 0;
}

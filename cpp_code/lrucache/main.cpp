/*
 * g++ main.cpp -o main -std=c++11
 */

#include <string>
#include <iostream>
#include <vector>
#include "lrucache.hpp"

int main(int argc, char* argv[]) {

    cache::lru_cache<std::string, std::string> cache(3);
    cache.put("one", "1");
    cache.put("two", "2");
    cache.put("three", "3");

    // 此处用到one,因此one被移动到队列的最前面,这样一来two就落到了
    // 最后一个
    std::string str_key = "one";
    const std::string& str_value = cache.get(str_key);
    std::cout << str_key << ": " << str_value << std::endl;

    // 因为cache设置大小为3,所以此时队列中的元素是5,4,1[,3,2]
    cache.put("four", "4");
    cache.put("five", "5");

    str_key = "two";
    std::cout << cache.exists(str_key) << std::endl;

    return 0;
}

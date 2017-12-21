#include <iostream>
#include <map>
#include <string>

int main(int argc, char* argv[]) {
    std::map<std::map<std::string, std::string>, int> fulldata;
    std::map<std::string, std::string> key_map;
    key_map["name"] = "zhangsan";
    key_map["name_other"] = "zhangsaner";
    fulldata[key_map] = 1;

    key_map["name"] = "lisi";
    key_map["name_other"] = "lisier";
    fulldata[key_map] = 3;

    key_map["name"] = "san";
    key_map["name_other"] = "saner";
    fulldata[key_map] = 5;

    key_map["name"] = "zhang";
    key_map["name_other"] = "zhanger";
    fulldata[key_map] = 4;

    key_map["name"] = "wangwu";
    key_map["name_other"] = "wangwuer";
    fulldata[key_map] = 2;


    std::map<std::string, std::string> map_target;
    map_target["name"] = "lisi";
    map_target["name_other"] = "lisier";
    if (fulldata.find(map_target) != fulldata.end()) {
        std::cout << "found key, value is " << fulldata[map_target] << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }

    map_target["name"] = "maliu";
    map_target["name_other"] = "er";
    if (fulldata.find(map_target) != fulldata.end()) {
        std::cout << "found key, value is " << fulldata[map_target] << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }

    

    return 0;
}

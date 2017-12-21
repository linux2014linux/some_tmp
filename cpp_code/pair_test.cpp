#include <iostream>
#include <map>
#include <string>

int main(int argc, char* argv[]) {
    std::map<std::string, std::string> fulldata;
    std::pair<std::string, std::string> key_pair;

    fulldata["name"] = "zhangsan";
    fulldata["age"] = "1";
    fulldata["address"] = "China";
    fulldata["info"] = "...";

    std::pair<std::string, std::string> tmp_pair("ext1", "no");
    fulldata.insert(tmp_pair);

    std::map<std::string, std::string>::iterator it = fulldata.begin();
    for (; it != fulldata.end(); it++) {
        key_pair = *it;
        std::cout << key_pair.first << "-" << key_pair.second << std::endl;
    }

    /*
    key_pair["name"] = "lisi";
    key_pair["name_other"] = "lisier";
    fulldata[key_pair] = 3;

    key_pair["name"] = "san";
    key_pair["name_other"] = "saner";
    fulldata[key_pair] = 5;

    key_pair["name"] = "zhang";
    key_pair["name_other"] = "zhanger";
    fulldata[key_pair] = 4;

    key_pair["name"] = "wangwu";
    key_pair["name_other"] = "wangwuer";
    fulldata[key_pair] = 2;


    std::pair<std::string, std::string> pair_target;
    pair_target["name"] = "lisi";
    pair_target["name_other"] = "lisier";
    if (fulldata.find(pair_target) != fulldata.end()) {
        std::cout << "found key, value is " << fulldata[pair_target] << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }

    pair_target["name"] = "maliu";
    pair_target["name_other"] = "er";
    if (fulldata.find(pair_target) != fulldata.end()) {
        std::cout << "found key, value is " << fulldata[pair_target] << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }
*/
    

    return 0;
}

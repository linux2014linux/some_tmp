# static way link boost
g++ regex_usage.cpp -o regex_usage -I/home/ll/softenv/boost_1-65-1/include -L/home/ll/softenv/boost_1-65-1/lib -lboost_regex -lpthread -static 

g++  sharedptr_demo.cpp -o sharedptr_demo -I/home/ll/softenv/boost_1-65-1/include -L/home/ll/softenv/boost_1-65-1/lib -lboost_regex -lpthread -static 

g++  unorderedset_demo.cpp -o unorderedset_demo -I/home/ll/softenv/boost_1-65-1/include -L/home/ll/softenv/boost_1-65-1/lib -lboost_regex -lpthread -static 

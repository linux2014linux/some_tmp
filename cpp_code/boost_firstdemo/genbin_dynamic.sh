# dynamic way link boost
# vim ~/.bashrc
# export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:libpath
# source ~/.bashrc
g++ regex_usage.cpp -o regex_usage -I/home/ll/softenv/boost_1-65-1/include -L/home/ll/softenv/boost_1-65-1/lib -lboost_regex

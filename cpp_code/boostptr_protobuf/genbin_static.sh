# static way link boost
g++ demo.pb.cc main.cpp -g -o main \
    -I/home/ll/softenv/boost_1-65-1/include\
    -I/home/ll/softenv/protobuf3.3.0/include/ \
    -L/home/ll/softenv/boost_1-65-1/lib  \
    -L/home/ll/softenv/protobuf3.3.0/lib/ \
    -lprotobuf \
    -lpthread \
    -static

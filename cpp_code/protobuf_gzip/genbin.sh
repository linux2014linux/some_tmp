# static way link protobuf
g++ demo.pb.cc main.cpp -o main -I/home/ll/softenv/protobuf3.3.0/include/ -L/home/ll/softenv/protobuf3.3.0/lib/ -lprotobuf -lpthread -static -lz

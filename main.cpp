#include <iostream>
#include <assimp/aabb.h>
#include <boost/thread.hpp>

int main()
{
    std::cout << "Hello, world!\n";
    boost::thread([]{}).join();
}

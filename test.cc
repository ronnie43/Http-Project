#include<iostream>
#include<sstream>

int main()
{
    char *msg = "aaa bbb ccc";
    std::stringstream ss(msg);
    std::string p1,p2,p3;

    ss << p1 << p2 << p3;

    std::cout << sizeof(int*) << std::endl;
}


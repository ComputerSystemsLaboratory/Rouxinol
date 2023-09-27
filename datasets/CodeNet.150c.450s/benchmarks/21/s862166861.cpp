#include<iostream>
#include<cmath>
#include<string>

int main(int, char**)
{
    std::string str;
    std::cin >> str;
    int value = std::stoi(str);
    std::cout << (value * value * value) << std::endl;
}

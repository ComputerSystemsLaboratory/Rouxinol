#include <iostream>
#include <string>

int main() { std::string s; std::cin >> s; auto n=std::stoi(s);std::cout << (n*n*n) << std::endl; }
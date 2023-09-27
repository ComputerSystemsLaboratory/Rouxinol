// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string str;
    int n;
    n = 0;
    char c;
    while(std::cin >> str){
        if(n != 0){
            std::cout << " ";
        }
        n = str.length();
        for(int i=0; i<n; ++i){
            c = str[i];
            if (c - 'a' >= 0 && c - 'z' <= 0){
                c = 'A' + (c - 'a');
                std::cout << c;
            }
            else if (c - 'A' >= 0 && c - 'Z' <= 0){
                c = 'a' + (c - 'A');
                std::cout << c;
            }
            else {
                std::cout << c;
            }
        }
    }
    std::cout << endl;
    return 0;
}


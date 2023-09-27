// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string str;
    int n, digit_sum;
    n = 0;
    char c;
    while(std::cin >> str){
        n = str.length();
        if(str[0] == '0'){
            break;
        }
        digit_sum = 0;
        for (int i=0; i<n; ++i){
            c = str[i];
            digit_sum += (int)(c - '0');
        }
        std::cout << digit_sum << endl;
    }
    return 0;
}


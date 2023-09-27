#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string str;
    vector<int> num;
    num.resize(26);
    for (int i=0; i<26; ++i){
        num[i] = 0;
    }
    int n;
    n = 0;
    char c;
    while(std::cin >> str){
        n = str.length();
        for (int i=0; i<n; ++i){
            c = str[i];
            if(c - 'a' >= 0 && c - 'z' <= 0){
                num[(int)(c - 'a')]++;
            }
            else if(c - 'A' >= 0 && c - 'Z' <= 0){
                num[(int)(c - 'A')]++;
            }
        }
    }
    for (int i=0; i<26; ++i){
        std::cout << (char)('a' + i) << " : " << num[i] << endl;
    }
    return 0;
}


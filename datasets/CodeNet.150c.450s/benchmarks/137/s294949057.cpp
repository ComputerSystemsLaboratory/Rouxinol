#include <iostream>
#include <cstring>
using namespace std;

constexpr auto DictSize = ((1 << 26) - 1)/3;

bool dict[DictSize];

inline int myhash(char* str){
    int n = strlen(str);
    int num = 0;
    for (int i = 0; i != n; ++i){
        num *= 4;
        if (str[i] == 'C'){
            num += 1;
        }else if (str[i] == 'G'){
            num += 2;
        }else if (str[i] == 'T'){
            num += 3;
        }
    }
    num += ((1 << (2*n)) - 4) / 3;
    return num;
}


int main()
{
    ios::sync_with_stdio(false);
    memset(dict, false, DictSize);
    int n = 0;
    cin >> n;
    char command[7];
    char str[13];
    for (int i = 0; i != n; ++i){
        cin >> command >> str;
        if (command[0] == 'i'){
            dict[myhash(str)] = true;
        }else if(dict[myhash(str)]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    int rec[26] = {};
    char str[1201];
    while(cin >> ch){
        ch = tolower(ch);
        if(isalpha(ch)) rec[ch - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        printf("%c : %d\n",'a'+i,rec[i]);
    }

    return 0;
}
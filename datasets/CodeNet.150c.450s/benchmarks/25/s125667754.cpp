#include<iostream>
using namespace std;
#include<stdio.h>
#include<cctype>

int main() {
        int r[26], i, j;
        char ch;
        for(i = 0; i < 26; i++) {
                r[i] = 0;
        }
        for(i = 0; i < 26; i++) {
                while( cin >> ch ) {
                        if(isupper(ch)) ch = (char)(tolower(ch));
                        j = ch - 'a';
                        if (j < 26 && j >= 0) r[j]++;
                }
        }
        for(i = 0; i < 26; i++) {
                cout << (char)('a' + i) << " : " << r[i] << endl;
        }
        return 0;
}
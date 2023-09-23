#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    char ch;
    while (1) {
        scanf("%c", &ch);
        if ('a' <= ch && ch <= 'z') {
            ch = ch - 'a' + 'A';
        } else if ('A' <= ch && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        cout << ch;
        if (ch == '\n') break;
    }
}
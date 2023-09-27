#include <stdio.h>

#define MAX 1210

int main()
{
    char ch, nextch;
    while (scanf("%c", &ch) != EOF) {
        nextch = ch;        
        if ('a' <= ch && ch <= 'z') {
            nextch = ch - ('a' - 'A');
        } else if ('A' <= ch && ch <= 'Z') {
            nextch = ch + ('a' - 'A');
        }
        printf("%c", nextch);
    }
    return 0;
}
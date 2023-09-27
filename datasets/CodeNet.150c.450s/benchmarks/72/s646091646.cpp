
#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char ch;
    do {
        scanf("%c", &ch);
        if (islower(ch)) printf("%c", toupper(ch));
        else printf("%c", tolower(ch));
    } while(ch != '\n');
    return 0;
}
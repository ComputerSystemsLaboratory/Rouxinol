#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main() {
    char ch[MAX];
    
    while (1) {
        std::cin >> ch;
        if (ch[0] == '0') break;
        int sum = 0;
        for (int i = 0; i < strlen(ch); i++) {
            sum += ch[i] - '0';
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
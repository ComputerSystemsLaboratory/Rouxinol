#include <iostream>
#include <stdio.h>

int main() {
    
    while (true) {
        int m = 0, f = 0, r = 0;
        const char *ch[512];
        int sum = 0;
        scanf("%d%d%d", &m, &f, &r);
        sum = m + f;
        
        if (m == -1 && f == -1 && r == -1) break;
        
        if (sum >= 80) *ch = "A";
        if (sum >= 65 && sum < 80) *ch = "B";
        if (sum >= 50 && sum < 65) *ch = "C";
        if (sum >= 30 && sum < 50) {
            *ch = "D";
            if (r >= 50) {
                *ch = "C";
            }
        }
        if (sum < 30) *ch = "F";
        if (m == -1 || f == -1) *ch = "F";

        printf("%s\n", *ch);
    }
}
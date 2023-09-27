#include <iostream>
int main() {
    int m,f,r;
    while (scanf("%d%d%d", &m, &f, &r)) {
        if (m == -1 && f == -1 && r == -1) break;
        else if (m == -1 || f == -1) puts("F");
        else if (m + f >= 80) puts("A");
        else if (m + f >= 65) puts("B");
        else if (m + f >= 50 || (m + f >= 30 && r >= 50)) puts("C");
        else if (m + f >= 30) puts("D");
        else puts("F");
    }
    return 0;
}
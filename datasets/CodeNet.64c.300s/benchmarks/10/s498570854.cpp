#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while (a!=0 || b!=0) {
        if(a < b) printf("%d %d\n", a, b);
        else printf("%d %d\n", b, a);
        scanf("%d %d", &a, &b);
    }
}

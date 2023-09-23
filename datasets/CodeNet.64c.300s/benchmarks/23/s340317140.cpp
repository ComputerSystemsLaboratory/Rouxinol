#include <stdio.h>
     
void sclcS(int a, int b) {
    int S, L;
    S = a * b;
    L = a * 2 + b * 2;
    printf("%d %d\n", S, L);
}
     
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sclcS(a, b);
    return 0;
}
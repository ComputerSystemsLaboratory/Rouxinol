#include <stdio.h>
#include <stdlib.h>

using namespace std;

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int x;
    if (a>=b) x = gcd(a, b);
    else x = gcd(b, a);

    printf("%d\n", x);
    return 0;
}
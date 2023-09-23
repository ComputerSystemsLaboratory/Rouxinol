#include <stdio.h>
#include <cmath>
using namespace std;

int lcm(int max, int min) {
    int multiplier = 1;
    while ((max * multiplier) % min != 0) {
        multiplier++;
    }
    return max * multiplier;
}

int gcd(int max, int min) {
    int r = max % min;
    int x = min;
    while (r != 0) {
        int tmp = r;
        r = x % r;
        x = tmp;
    }
    return x;
}

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b)+1)  {
        int min = (a < b)? a : b;
        int max = (a < b)? b : a;
        printf("%d %d\n", gcd(max, min), lcm(max, min));
    }
    return 0;
}
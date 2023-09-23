#include <cstdio>

int main(void){
    int n, x, min = 1000000, max = -1000000;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
        if (x < min) min = x;
        if (x > max) max = x;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}
#include<cstdio>

int main() {
    unsigned long long tot = 1;
    int x;
    scanf("%d", &x);
    for (int i = 1; i != x + 1; i++) {
        tot*= i;
    }
    printf("%lld\n", tot);
    return 0;
}
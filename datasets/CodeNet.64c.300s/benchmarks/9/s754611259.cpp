#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    
    long long int r = 100000;
    for (int i = 0; i < n; ++i) {
        r += r * 0.05;
        int s = r % 1000 ? 1000 : 0; 
        r = r / 1000 * 1000;
        r += s;
    }
    printf("%lld\n", r);
}
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long x=1e5;
    for (int i=0; i<n; ++i) {
        x += (x+19)/20;
        ((x+=999)/=1000) *= 1000;
    }

    printf("%lld\n", x);
    return 0;
}
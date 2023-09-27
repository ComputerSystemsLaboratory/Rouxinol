#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long res=1;
    for (int i=1; i<=n; ++i)
        res *= i;

    printf("%lld\n", res);
    return 0;
}
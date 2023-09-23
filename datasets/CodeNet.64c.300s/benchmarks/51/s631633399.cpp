#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long sum;
    scanf("%d", &n);
    sum = n;
    for (int i = n-1; i >= 2; i--) {
        sum *= i;
    }
    printf("%lld\n", sum);
    return 0;
}


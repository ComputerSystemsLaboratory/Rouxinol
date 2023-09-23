#include <cstdio>
#include <cmath>

using namespace std;

int isPrime(int a) {
    int boundaly = 2;
    if (a < boundaly) return false;
    if (a == boundaly) return true;
    if (a % 2 == 0) return false;

    double sqNum = sqrt(a);
    for (int i = 3; i <= sqNum; i += boundaly) {
        if (a % i == 0) return false;
    }

    return true;
}

int main() {
    int n, input;
    int ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &input);
        if (isPrime(input)) ans++;
    }

    printf("%d\n", ans);
    return 0;
}


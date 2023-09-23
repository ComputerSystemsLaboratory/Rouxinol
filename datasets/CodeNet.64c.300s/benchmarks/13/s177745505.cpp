#include <cstdio>
using namespace std;

int F[50];

int fibonacci(int n) {
    if (n==0||n==1) {
        return F[n] = 1;
    }
    if (F[n] != -1) {
        return F[n];
    }

    return F[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main (void) {
    int N, i;

    for(i = 0 ; i < 50 ; i ++ ) {
        F[i] = -1;
    }

    scanf("%d", &N);
    printf("%d\n", fibonacci(N));

    return 0;
}
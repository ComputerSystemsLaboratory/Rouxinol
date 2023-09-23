#include<stdio.h>

#define MAX 50

int db[MAX];

int fibonacci(int n) {
    if (n == 0 || n == 1) return 1;
    if (db[n] != -1) return db[n];
    return db[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    for (int i = 0; i < MAX; ++i) db[i] = -1;

    scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d\n", result);
    return 0;
}
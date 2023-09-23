#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 45
#define NIL -1
int Memo[MAX];

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return Memo[n] = 1;
    if (Memo[n] != NIL)
        return Memo[n];
    return Memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    fill_n(Memo, MAX, NIL);
    printf("%d\n", fibonacci(n));
}
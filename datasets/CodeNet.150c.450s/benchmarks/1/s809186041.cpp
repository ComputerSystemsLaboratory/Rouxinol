#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 100010;
int a[MAX];
int L[MAX];
int n;
int len;

int main() {
    scanf("%d", &n);
    len = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    L[0] = a[0];
    len = 1;
    for (int i = 1; i < n; i++) {
        if (L[len-1] < a[i]) {
            L[len++] = a[i];
        } else {
            *lower_bound(L, L+len, a[i]) = a[i];
        }
    }
    printf("%d\n", len);

    return 0;
}
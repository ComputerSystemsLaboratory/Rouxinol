#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <map>

using namespace std;

const int MAX = 101;
int n;
int a[MAX];


void solve() {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int mi = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[mi]) mi = j;
        }
        if (mi != i) {
            swap(a[mi], a[i]);
            ans++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    printf("%d\n", ans);
}


int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    solve();
    return 0;
}
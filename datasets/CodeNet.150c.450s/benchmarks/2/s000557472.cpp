#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)



int partition(vector<int> &a, int p, int r) {
    int x, i, j, t;
    x = a[r];
    i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    rep(i, n) {
        scanf("%d", &a[i]);
    }
    int p = partition(a, 0, n-1);
    rep(i, n) {
        if (i == p) printf("[%d]", a[i]);
        else printf("%d", a[i]);
        if (i != n-1) printf(" ");
        else printf("\n");
    }
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

void counting_sort(vector<int> &a, int k) {
    vector<int> c(k+1);
    rep(i, a.size()) {
        c[a[i]]++;
    }
    rep(i, k) {
        c[i+1] += c[i];
    }
    vector<int> b(a.size());
    for (int i = a.size()-1; i >= 0; i--) {
        c[a[i]]--;
        b[c[a[i]]] = a[i];
    }
    rep(i, a.size()) {
        a[i] = b[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    // vector<int> c(10001);
    rep(i, n) {
        scanf("%d", &a[i]);
        // c[a[i]]++;
    }
    // rep(i, 10000) {
    //     c[i+1] += c[i];
    // }
    // vector<int> b(n);
    // for (int i = n-1; i >= 0; i--) {
    //     c[a[i]]--;
    //     b[c[a[i]]] = a[i];
    // }
    // rep(i, n) {
    //     printf("%d", b[i]);
    //     if (i != n-1) printf(" ");
    //     else printf("\n");
    // }
    counting_sort(a, 10000);
    rep(i, n) {
        printf("%d", a[i]);
        if (i != n-1) printf(" ");
        else printf("\n");
    }
}

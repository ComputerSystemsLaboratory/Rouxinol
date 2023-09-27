#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

const int AMAX = 10000;

vector<int> counting_sort(vector<int> a) {
    vector<int> counter(AMAX + 1), sorted(a.size());
    for(int x: a) counter[x]++;
    for(int i = 1; i <= AMAX; ++i) counter[i] += counter[i - 1];
    for(int x: a) sorted[--counter[x]] = x;
    return sorted;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n), sorted(n);
    rep(i, n) cin >> a[i];

    sorted = counting_sort(a);

    rep(i, n) {
        printf("%d", sorted[i]);
        printf(i == n - 1 ? "\n" : " ");
    }

    return 0;
}

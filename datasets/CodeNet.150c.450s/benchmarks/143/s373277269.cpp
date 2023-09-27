#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> x(100001, 0);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        x[a]++;
    }
    int q, b, c;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> b >> c;
        sum += (c - b) * x[b];
        x[c] += x[b];
        x[b] = 0;
        cout << sum << endl;
    }
}
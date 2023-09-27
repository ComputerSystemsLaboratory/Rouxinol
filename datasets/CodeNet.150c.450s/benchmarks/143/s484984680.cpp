#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> cnt(1e5 + 1);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt.at(x)++;
        sum += x;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b, c;
        cin >> b >> c;
        cnt.at(c) += cnt.at(b);
        sum += (c - b) * cnt.at(b);
        cnt.at(b) = 0;
        cout << sum << endl;
    }
    return 0;
}
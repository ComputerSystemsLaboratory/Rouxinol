#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int numlist[100001];
int main() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        numlist[a]++;
    }
    int q;
    cin >> q;
    int b[q], c[q];
    for (int i = 0; i < q; i++) {
        cin >> b[i] >> c[i];
    }
    for (int i = 0; i < q; i++) {
        sum += (c[i] - b[i]) * numlist[b[i]];
        cout << sum << endl;
        numlist[c[i]] += numlist[b[i]];
        numlist[b[i]] = 0;
    }
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MX = 100005;

int main() {
    int n, q;
    cin >> n;
    vector<int> bunpu(MX);
    ll tot = 0;
    rep(i, n) {
        int a;
        cin >> a;
        bunpu[a]++;
        tot += a; 
    }
    cin >> q;
    vector<int> b(q+5), c(q+5);
    rep(i, q) cin >> b[i] >> c[i];
    rep(i, q) {
        tot += (c[i] - b[i])*bunpu[b[i]];
        bunpu[c[i]] += bunpu[b[i]];
        bunpu[b[i]] = 0;
        cout << tot << endl;
    }

    return 0;
}
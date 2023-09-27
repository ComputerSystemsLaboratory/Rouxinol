#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    ll sum = 0;
    cin >> N;
    vector<ll> num(100001, 0);
    rep(i, N) {
        ll a;
        cin >> a;
        sum += a;
        num[a] += 1;
    }
    cin >> Q;
    rep(i, Q) {
        ll b, c;
        cin >> b >> c;
        sum = sum - (b * num[b]);
        sum = sum + (c * num[b]);
        num[c] = num[c] + num[b];
        num[b] = 0;
        cout << sum << endl;
    }
}
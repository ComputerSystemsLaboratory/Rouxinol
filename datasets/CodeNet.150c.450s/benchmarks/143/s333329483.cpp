#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(x) (x).begin(),(x).end()

using ll = long long;
using P = pair<int,int>;

const int MOD = 1e9 + 7;
const int INF = 1001001001;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;

    map<int, ll> a;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[x] ++;
        sum += x;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        ll b, c;
        cin >> b >> c;

        ll x = a[b];
        sum = sum + (c - b) * x;
        a[c] += a[b];
        a[b] = 0;

        cout << sum << "\n";
    }

    return 0;
}
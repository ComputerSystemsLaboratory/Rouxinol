#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

ll d, c[33], s[444][33];

vector<ll> score(vector<ll> t) {
    ll last[33] = {}, i, j, sc = 0;
    vector<ll> v;
    for (i = 1; i <= d; i++){
        sc += s[i-1][t[i-1]];
        last[t[i-1]] = i;
        for (j = 0; j < 26;j++)
            sc -= c[j] * (i - last[j]);
        v.pb(sc);
    }
    return v;
}

int main(){
    ll i, j;
    cin >> d;
    for (i = 0; i < 26;i++)
        cin >> c[i];
    for (i = 0; i < d;i++)
        for (j = 0; j < 26;j++)
            cin >> s[i][j];
    vector<ll> v;
    ll t;
    for (i = 0; i < d;i++){
        cin >> t;
        v.pb(--t);
    }
    auto ans = score(v);
    for (i = 0; i < d;i++)
        cout << ans[i] << endl;
}
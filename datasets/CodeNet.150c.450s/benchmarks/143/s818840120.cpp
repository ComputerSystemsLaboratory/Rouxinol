#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int INF = (1<<30) - 1;
const ll LINF = (1LL<<60) - 1;
const int mod = 1e9 + 7;


int main(){
    int n;
    cin >> n;
    int a;
    ll sum = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
        mp[a]++;
    }

    int q;
    cin >> q;
    int b, c;
    for (int i = 0; i < q; ++i) {
        cin >> b >> c;
        int num = mp[b];
        mp.erase(b);
        mp[c] += num;
        sum += (c - b) * num;
        cout << sum << endl;
    }
}
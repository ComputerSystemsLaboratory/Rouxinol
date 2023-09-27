# include <bits/stdc++.h>
# define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
# pragma GCC target("avx2")
# pragma GCC optimize("O3")
# pragma GCC optimize("unroll-loops")
# define int long long
  
using namespace std;
  
const int N = 1e3 + 7;
const int mod = 1e9 + 7;

int32_t main() {
    speed;
    int n;
    cin >> n;
    int sum = 0;
    map < int, int > mp;
    for ( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        sum += x;
        mp[x]++;
    }
    int q;
    cin >> q;
    for ( int i = 0; i < q; i++ ) {
        int b, c;
        cin >> b >> c;
        int x = mp[b];
        sum -= x * b;
        sum += x * c;
        mp[b] = 0;
        mp[c] += x;
        cout << sum << '\n';
    }
}

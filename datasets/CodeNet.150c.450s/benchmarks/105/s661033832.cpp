  
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
using namespace std;
const int maxn = 300005;
const int mod = 998244353;
ll d[63];
ll a[205];
string s;
bool add(ll x) {
    for (int i = 62 ; i >= 0 ; i--) {
        if (x & (1LL<<i)) {
            if (d[i] == -1) {
                d[i] = x;
                return true;
            }
            x ^= d[i];
        }
    }
    return 0;
}
void solve() {
    memset(d, -1, sizeof(d));
    int n;
    cin >> n;
    f (n) {
        cin >> a[i];
    }
    cin >> s;
    int f = 0;
    for (int i = n - 1 ; i >= 0 ; i--) {
        if (add(a[i]) && s[i] == '1') {
            f = 1;
            break;
        }
    }
    cout << f << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

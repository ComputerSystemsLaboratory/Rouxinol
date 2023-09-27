#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
const ull mod = 1e9 + 7;
#define REP(i,n) for(int i=0;i<(int)n;++i)
const ll INF = LLONG_MAX/3;

int main(){
    int n;
    cin >> n;
    ll a[n];
    REP(i, n) cin >> a[i];
    ll b[n];
    REP(i, n) b[i] = INF;
    REP(i, n){
        *lower_bound(b, b+n, a[i]) = a[i];
    }
    cout << lower_bound(b, b+n, INF)-b << endl;
    return 0;
}
#include <bits/stdc++.h>
#include<math.h>
#include<algorithm> 
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18

int main() {
    int n ;
    cin >> n ;
    vector<ll> a (100005) ;
    ll tot = 0; 
    rep(i, n){
        int k ; 
        cin >> k ;
        a[k]++ ;
        tot += k ;
    }    
    vector<ll> ans ; 
    int q ;
    cin >> q ;
    rep(i, q){
        ll b, c ;
        cin >> b >> c ;
        ll t = a[b] ;
        tot -= t*b ;
        tot += t*c ;
        ans.push_back(tot) ;
        a[b] = 0 ;
        a[c] += t ;
    }
    int s = ans.size() ;
    rep(i, s){
        cout << ans[i] << endl ;
    }
}

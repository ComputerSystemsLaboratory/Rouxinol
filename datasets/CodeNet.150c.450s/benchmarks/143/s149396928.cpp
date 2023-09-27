#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF = 1LL<<60;

ll GCD(ll x,ll y){
    if(y == 0) return x;
    else return GCD(y,x%y);
}

ll LCM(ll a,ll b){
    return a / GCD(a,b) * b;
}

const int MOD = 1000000007;


//void warshall_floyd(int n){
//    for(int k=0;k<n;k++){
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
//            }
//        }
//    }
//}
//ll calc_digit(ll N) {
//    ll res = 0;
//    while (N) {
//        ++res;
//        N /= 10;
//    }
//    return res;
//}
//ll sum_digit(ll N) {
//    ll res = 0;
//    while (N) {
//        res += N % 10;
//        N /= 10;
//    }
//    return res;
//}


int main() {
    int n; cin >> n;
    multimap<ll,ll> m;
    ll sum = 0;
    for(int i = 0;i < n;i++){
        ll a; cin >> a;
        sum += a;
        if(m.find(a) == m.end()){
            m.insert(make_pair(a,1));
        }else{
            m.find(a)->second++;
        }
    }
    int q; cin >> q;
    for(int i = 0;i < q;i++){
        ll s,t; cin >> s >> t;
        auto e = m.find(s);
        auto f = m.find(t);
        if(e == m.end()) m.insert(make_pair(s,0));
        if(f == m.end()) m.insert(make_pair(t,0));
        auto x = m.find(s);
        auto y = m.find(t);
        sum -= s*x->second;
        sum -= t*y->second;
        y->second+=x->second;
        x->second = 0;
        sum += t*y->second;
        cout << sum << endl;
    }
}



//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
using in = int64_t;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
const double PI=3.14159265358979323846;
const in MOD = 1000000007;
const in INF=1<<30;
using P=pair<int,int>;
vector<int> dx={0,1,-1,0};
vector<int> dy={1,0,0,-1};

//a^n (mod)
in modpow(in a, in n, in mod) {
    in res = 1ll;
    while (n > 0ll) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}


int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
cout << fixed << setprecision(10);
    in n,m;
    cin>>n>>m;
    in ans =modpow(n,m,MOD);
    cout<<ans<<endl;    
}

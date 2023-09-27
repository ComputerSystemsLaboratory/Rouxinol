using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i = 0; i < (n); i++)
#define divup(a,b) ( ( (a) + ( (b) - 1u) ) / (b) ) // a/b の余り切り上げ
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
const ll mod = 1000000007;
const ll mod9 = 1000000009;

ll d[109];
ll u[109];
ll k[109];
ll v[109][109];
struct Point{
    ll s,t;
};
queue<Point> S;

ll  bfs(){
    while(!S.empty()){
        ll n = S.front().s;
        ll t = S.front().t;
        S.pop();
        if(d[n]==0){
            d[n]=t;
        // cout<<" d "<<n<<" "<<t<<endl;
        }
        rep(i,k[n]){
            if(d[v[n][i]-1]==0) S.push({v[n][i]-1,t+1});
        }
    }
    return 0;
}

signed main(){
    ll n;
    cin>>n;
    rep(i,n){
        ll a;
        cin>>u[i]>>k[i];
        rep(j,k[i]){
            cin>>v[i][j];
        }
    }
    S.push({0,1});
    bfs();
    rep(i,n){
        d[i]--;
        printf("%lld %lld\n",i+1,d[i]);
    }
}



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()
#define mp make_pair
bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}


bool In_map(ll y,ll x,ll h,ll w){
    if(y<0 || x<0 || y>=h || x>=w){
        return 0;
    }else{
        return 1;
    }
}
const vector<ll> dx{1,0,-1,0};
const vector<ll> dy{0,1,0,-1};
int main() {
    ll n;
    cin >> n;
    vector<ll> r(n);
    vector<ll> c(n);
    rep(i,n){
        cin >> r[i] >> c[i];
    }

    vector<vector<ll>> dp(n,vector<ll>(n,INF));
    rep(i,n){
        dp[i][i] = 0;
    }
    rep(i,n){
        rep(j,n-i-1){
            rep(k,i+1){
                chmin(dp[j][j+i+1],dp[j][j+k]+dp[j+k+1][j+i+1] + r[j]*c[j+k]*c[j+i+1]);
                //chmin(dp[i][j],dp[i][i+k]+dp[i+k+1][j] + r[i]*c[i+k]*c[j]);
            }
        }

    }

    cout <<dp[0][n-1]<<endl;;
    return 0;
    

}

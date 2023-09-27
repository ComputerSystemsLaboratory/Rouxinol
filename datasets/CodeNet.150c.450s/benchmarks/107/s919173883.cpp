#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;
#define MOD 1000000007
#define INF 1<<30
#define LINF (ll)1<<62
#define rep(i,n) for(ll i=0; i<(n); i++)
#define REP(i,a,b) for(ll i=(a); i<(b); i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> P;
typedef vector<pair<ll, ll>> vpl;

ll min3(ll a, ll b, ll c){
    if(a < b){
        if(b < c) return a;
        else{
            if(a < c) return a;
            else return c;
        }
    }else{
        if(b < c) return b;
        else return c;
    }
}


int main(){
    string s,t; cin >> s >> t;
    ll S = s.size();
    ll T = t.size();
    ll dp[S+1][T+1];
    rep(i,S+1) dp[i][0] = i;
    rep(j,T+1) dp[0][j] = j;
    rep(i,S){
        rep(j,T){
            ll c = (s[i] == t[j]) ? 0 : 1;
            dp[i+1][j+1] = min3(dp[i][j+1]+1, dp[i+1][j]+1, dp[i][j]+c);
        }
    }
    cout << dp[S][T] << endl;
}

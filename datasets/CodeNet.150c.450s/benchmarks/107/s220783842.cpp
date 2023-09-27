/*
    Author:zeke
    
    pass System Test!
    GET AC!!
*/
#include <iostream>
#include <queue>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <functional>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <map>
#include <iomanip>
#include <utility>
#include <stack>
using ll = long long;
using ld = long double;
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rep3(var, min, max) for (ll (var) = (min); (var) < (max); ++(var))
#define repi3(var, min, max) for (ll (var) = (max) - 1; (var) + 1 > (min); --(var))
#define Mp(a,b) make_pair((a),(b))
#define F first
#define S second
#define Icin(s) ll (s);cin>>(s);
#define Scin(s) ll (s);cin>>(s);
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<V> VV;
typedef vector<P> VP;
//ここから
int main() {
    string s,t;
    cin>>s>>t;
    ll n=s.size()+1;
    ll m=t.size()+1;
    VV dp(n,V(m));
    dp[0][0]=0;
    rep(i,n){
        rep(j,m){
            if(i==0){
                dp[0][j]=j;
            }else if(j==0){
                dp[i][0]=i;
            }else{
                dp[i][j]=dp[i-1][j]+1;
                chmin(dp[i][j],dp[i][j-1]+1);
                if(s[i-1]!=t[j-1]){
                    chmin(dp[i][j],dp[i-1][j-1]+1);
                }else{
                    chmin(dp[i][j],dp[i-1][j-1]);
                }
            }
        }
    }
    rep(i,n){
        rep(j,m){
     //       cout<<dp[i][j];
        }
      //  cout<<endl;
    }
    cout<<dp[n-1][m-1]<<endl;
}

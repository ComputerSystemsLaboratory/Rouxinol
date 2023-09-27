#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pp pair<pair<ll, ll>,pair<ll, ll>>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define lb lower_bound
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep2(i,a,b) for(ll i=a;i<b;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define all(x) x.begin(),x.end()
#define LB(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define UB(v,x) (upper_bound(v.begin(),v.end(),x)-v.begin())
#define ERASE(v) v.erase(unique(v.begin(),v.end()),v.end())
// #define int ll
using namespace std;
const int INF = (1 << 30 ) - 1;
const ll LLINF = (1LL << 60LL);
const int MOD = 1000000007;
const int MAX = 510000;
const double pi = acos(-1);
const double eps = 1e-9;

ll editDistance(const string x,const string y){
    ll n=x.size(),m=y.size();
    ll dp[n+2][m+2];
    rep(i,n+2)rep(j,m+2) dp[i][j]=LLINF;
    rep(i,n+1) dp[i][0]=i;
    rep(i,m+1) dp[0][i]=i;
    rep2(i,1,n+1)rep2(j,1,m+1){
        dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
        dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
        dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(x[i-1]!=y[j-1]));
    }
    return dp[n][m];
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    string s,t;
    cin>>s>>t;
    cout<<editDistance(s,t)<<endl;
    return 0;
}

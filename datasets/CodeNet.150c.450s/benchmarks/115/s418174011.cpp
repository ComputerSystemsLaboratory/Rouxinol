#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define int long long

#define rep(i,s,n) for(int i = s;i<n;i++)
/*#define repe(i,s,n) for(int i = s;i<=n;i++)
#define rrep(i,s,n) for(int i = (n)-1;i>=(s);i--)
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define fi first
#define se second
#define chmin(a,b) a=min((a),(b))
#define chmax(a,b) a=max((a),(b))
typedef long long ll;
typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
typedef pair<pint,int> P1;
typedef pair<int,pint> P2;
typedef pair<pint,pint>PP;
static const ll maxLL = (ll)1 << 62;
const ll MOD=1000000007;
const ll INF=1e18;
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};*/


int dp[1010][1010];
int N;
string s,t;

void lcs(string s,string t){
	memset(dp,0,sizeof(dp));
	int n=s.size(),m=t.size();
	rep(i,0,n){
		rep(j,0,m){
			if(s[i]==t[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}else{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	cout<<dp[n][m]<<endl;
};
signed main(){
    cin.tie(0);
	ios::sync_with_stdio(false);
    cin>>N;
    rep(i,0,N){
        cin>>s>>t;
        lcs(s,t);
    }
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

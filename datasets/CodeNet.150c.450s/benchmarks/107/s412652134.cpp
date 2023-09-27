#include <bits/stdc++.h>
#define be(v) (v).begin(),(v).end()
#define pb(q) push_back(q)
typedef long long ll;
using namespace std;
const ll mod=1000000007;
#define doublecout(a) cout<<fixed<<setprecision(10)<<a<<endl;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    string s,t;
    cin>>s>>t;
    int n=s.length(),m=t.length();
    ll dp[n+1][m+1];
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    		dp[i][j]=i+j;
    	}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		if(s[i-1]==t[j-1]){
    			dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
    		}
    		dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i][j],min(dp[i-1][j]+1,dp[i][j-1]+1)));
    	}
    }
    cout << dp[n][m] <<endl;
    return 0;
}


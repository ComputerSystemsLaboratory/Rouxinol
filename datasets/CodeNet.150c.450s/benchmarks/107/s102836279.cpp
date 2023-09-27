#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;
using namespace std;

int dp[1001][1001];
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()<s2.size()) swap(s1,s2);
    rep(i,s1.size())rep(j,s2.size()) dp[i][j]=1000100010;
    FOR(i,0,s1.size()+1) dp[i][0]=i;
    FOR(i,0,s2.size()+1) dp[0][i]=i;
    FOR(i,1,s1.size()+1){
        FOR(j,1,s2.size()+1){
            if(s1[i-1]==s2[j-1]) dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j]+1,dp[i][j-1]+1));
            else dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
        }
    }
    cout<<dp[s1.size()][s2.size()]<<endl;
    return 0;
}
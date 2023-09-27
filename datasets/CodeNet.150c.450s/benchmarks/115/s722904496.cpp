#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int dp[1001][1001];
int main(){
    int n;
    string s,t;
    cin>>n;
    rep(i,n){
        cin>>s>>t;
        memset(dp,0,sizeof(dp));
        int ss=s.size(),st=t.size();
        rep(i,ss){
            rep(j,st){
                if(s[i]==t[j]) dp[i+1][j+1]=dp[i][j]+1;
                else{
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }
        cout<<dp[ss][st]<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vin=vector<int>;
using vll=vector<long long>;
using vvin=vector<vector<int>>;
using vvll=vector<vector<long long>>;
using vstr=vector<string>;
using vvstr=vector<vector<string>>;
using vch=vector<char>;
using vvch=vector<vector<char>>;
using vbo=vector<bool>;
using vvbo=vector<vector<bool>>;
using vpii=vector<pair<int,int>>;
using pqsin=priority_queue<int,vector<int>,greater<int>>;
#define mp make_pair
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep2(i,s,n) for(int i=(s);i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define decp(n) cout<<fixed<<setprecision((int)n)
#define _GLIBCXX_DEBUG
int main(){
    string s,t;
    cin>>s>>t;
    int ss=s.size();
    int ts=t.size();
    vvin dp(ss+1,vin(ts+1));
    rep(i,ss+1)dp[i][0]=i;
    rep(i,ts+1)dp[0][i]=i;
    rep(i,ss){
        rep(j,ts){
            if(s[i]==t[j])dp[i+1][j+1]=dp[i][j];
            else dp[i+1][j+1]=min(dp[i][j]+1,min(dp[i+1][j]+1,dp[i][j+1]+1));
        }
    }
    cout<<dp[ss][ts]<<endl;
}

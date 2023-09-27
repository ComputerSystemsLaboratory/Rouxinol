//https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<(n);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int Levenshtein(string s1,string s2){
    int dp[s1.size()+1][s2.size()+1];
    REP(i,s1.size()+1)dp[i][0]=i;
    REP(i,s2.size()+1)dp[0][i]=i;
    rep(i,1,s1.size()+1)rep(j,1,s2.size()+1)
        dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+(s1[i-1]==s2[j-1]?0:1)});
    return dp[s1.size()][s2.size()];
}

int main()
{
   string s1,s2;cin>>s1>>s2;
   cout<<Levenshtein(s1,s2)<<endl;
}


#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include <tuple>
using namespace std;

const double pi = acos(-1);
#define nyan cout<<"(=^•ω•^=)"<<endl;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)

int Q;
int dp[1100][1100];
// 1-leadingとして，
// dp[i][j] := sのi番目までの文字列とtのj番目までの文字列のLCSのサイズ

signed main(){
    cin>>Q;
    rep(q,Q){
        string s,t;
        cin>>s>>t;
        for(int i=0;i<=s.length();i++)dp[i][0]=0;
        for(int i=0;i<=t.length();i++)dp[0][i]=0;
        for(int i=1;i<=s.length();i++){
            for(int j=1;j<=t.length();j++){
                if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[s.length()][t.length()]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e9
const int MAX_N=100;
const int MAX_W=100;
const int MOD=1000000007;

int dp[1001][1001];

int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length()+1;i++) dp[i][0]=i;
    for(int j=0;j<s2.length()+1;j++) dp[0][j]=j;
    for(int i=1;i<s1.length()+1;i++){
        for(int j=1;j<s2.length()+1;j++){
            int cost=s1[i-1]==s2[j-1]?0:1;
            dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+cost);
        }
    }
    cout<<dp[s1.length()][s2.length()]<<endl;
}

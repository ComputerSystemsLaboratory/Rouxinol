#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 1000000000
#define MAX_N 150005
using namespace std;

int dp[1005][1005];

int main(){
    string a=" ",b=" ",x;
    cin>>x;a+=x;
    cin>>x;b+=x;
    rep(i,0,1005)dp[i][0]=dp[0][i]=i;
    
    for(int i=1;i<a.size();i++){
        for(int j=1;j<b.size();j++){
            int cost (a[i]==b[j]?0:1);
            //cout<<cost<<endl;
            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+cost));
        }
    }
    cout<<dp[a.size()-1][b.size()-1]<<endl;
       
}
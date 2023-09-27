#include<bits/stdc++.h>
using namespace std;
#define INFTY 200000000000
long long dp[110][110];
int seen[110][110];
vector<int>ro(110),co(110);
long long ch(int l,int r){
    long long mn = dp[l][r];
    if(r==l) return dp[l][r] = 0;
    if(dp[l][r]!=INFTY) return dp[l][r];
    for (int k = l; k < r; k++)
    {
        long long sum = ch(l,k)+ch(k+1,r)+ro[l]*co[r]*ro[k+1];
        mn = min(mn,sum);
    }  
    return dp[l][r] = mn;
}
int main(){
    int n;cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ro[i]>>co[i];
    }
    
    for (int i = 0; i < n;i++)
    {
        for(int j=0;j<n;j++){
            dp[i][j] = INFTY;
        }
        }
    long long ans = ch(0,n-1);
    cout << ans << endl;

    return 0;
}

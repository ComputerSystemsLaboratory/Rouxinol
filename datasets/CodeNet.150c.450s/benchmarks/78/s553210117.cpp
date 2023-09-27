#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m=0;
    vector<int>v;
    for(int i=1;(i*(i+1)*(i+2))/6 < 1e6;++i){
        v.push_back((i*(i+1)*(i+2))/6);
        m++;
    }
    vector<int>dp(1e6,1e9);
    vector<int> dp1(1e6, 1e9);
    dp[0] = 0;
    dp1[0] = 0;
    for (int i = 0; i <= 1e6; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i + v[j] >= 1e6)
                break;
            dp[i + v[j]] = min(dp[i] + 1, dp[i + v[j]]);
            if (v[j] % 2 == 0)
                continue;
            dp1[i + v[j]] = min(dp1[i] + 1, dp1[i + v[j]]);
        }
    }
    while(cin>>n,n){
        cout<<dp[n]<<" "<<dp1[n]<<endl;
    }
}
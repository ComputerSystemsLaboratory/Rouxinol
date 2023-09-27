#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int maxarray(int* a,int s){
    int b = 0;
    rep(i,s)if(a[i]>b)b=a[i];
    return b;
}
int main(void){
    int n,mw;
    cin >> n >> mw;
    int dp[mw+1];
    rep(i,mw+1)dp[i]=0;
    rep(i,n){
        int v,w;
        cin >> v >> w;
        for(int j = mw;j >= 0;j--)if((j == 0||dp[j]!=0)&&w+j<=mw&&dp[w+j]<dp[j]+v)dp[w+j]=dp[j]+v;
    }
    cout << maxarray(dp,mw+1) << endl;
    return 0;
}

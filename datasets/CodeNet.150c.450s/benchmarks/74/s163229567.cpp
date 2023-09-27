#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m,c[20],dp[50001],i=0,j=0;
    cin >> n >> m;
    for(i;i<m;i++){
        cin >> c[i];
    }
    sort(c,c+m);
    for(i=0;i<=n;i++){
        dp[i] = 100000;
    }
    dp[0]=0;
    for(i=0;i<m;i++){
        dp[c[i]]=1;
    }
    for(i=1;i<n+1;i++){
        for(j=0;j<m;j++){
            if(c[j]>=i) break;
            dp[i]=min(dp[i],dp[i-c[j]]+1);
        }
    }
    cout<< dp[n] << endl;
}
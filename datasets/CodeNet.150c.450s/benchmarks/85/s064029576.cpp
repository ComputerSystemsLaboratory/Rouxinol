#include <iostream>
using namespace std;
int n,a[100],b[100],dp[100][100];
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(i!=j)dp[i][j]=1e9;
        }
    }
    for(int j=1;j<n;j++){
        for(int i=0;i+j<n;i++){
            for(int k=i;k<i+j;k++){
                dp[i][i+j]=min(dp[i][i+j],dp[i][k]+dp[k+1][i+j]+a[i]*b[i+j]*b[k]);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
}


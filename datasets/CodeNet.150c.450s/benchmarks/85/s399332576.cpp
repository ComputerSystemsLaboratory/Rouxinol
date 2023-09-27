#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
static const int Infinity=2000000000;

int main(){
    int n;cin>>n;
    int P[n+1],DP[n][n];
    rep(i,n){
        scanf("%d %d",&P[i],&P[i+1]);
    }
    rep(i,n){
        DP[i][i]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j+i<n;j++){
            int minc=Infinity;
            for(int k=j;k<j+i;k++){
                minc=min(minc,DP[j][k]+DP[k+1][j+i]+P[j]*P[k+1]*P[j+i+1]);
            }
            DP[j][j+i]=minc;
        }
    }
    cout<<DP[0][n-1]<<endl;
}

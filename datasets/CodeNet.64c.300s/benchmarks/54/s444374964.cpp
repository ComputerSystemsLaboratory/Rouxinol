#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N=100;
const int M=20;

int main(){
    ll dp[N-1][M+1];
    int n,num[N];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    for(int i=0;i<N-1;i++){
        for(int j=0;j<=M;j++){
            dp[i][j]=0;
        }
    }

    for(int i=0;i<=M;i++){
        dp[0][i]=0;
    }

    dp[0][num[0]]=1;

    for(int i=1;i<n-1;i++){
        for(int j=0;j<=M;j++){
            if(j-num[i]>=0){
                dp[i][j]+=dp[i-1][j-num[i]];
            }
            if(j+num[i]<=M){
                dp[i][j]+=dp[i-1][j+num[i]];
            }
        }
    }

    cout<<dp[n-2][num[n-1]]<<endl;

    return 0;
}
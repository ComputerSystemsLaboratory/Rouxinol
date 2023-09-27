#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF=(1<<21);

int n;
int dp[105][105], p[105];

void matrixChainMultiplication(){
    for(int i=1; i<=n; i++) dp[i][i]=0;

    for(int l=2; l<=n; l++){
        for(int i=1; i<=n-l+1; i++){
            int j=i+l-1;
            dp[i][j]=INF;
            for(int k=i; k<=j-1; k++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }
}

int main(void){
    cin >> n;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        if(i==0){
            p[0]=a, p[1]=b;
        }
        else p[i+1]=b;
    }

    matrixChainMultiplication();

    cout << dp[1][n] << endl;
}

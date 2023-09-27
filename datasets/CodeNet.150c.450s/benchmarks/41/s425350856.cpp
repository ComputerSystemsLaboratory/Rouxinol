#include <iostream>
using namespace std;
typedef long long ll;
ll n,m,a,b,c,dp[100][100];
int main(void){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j)dp[i][j]=1e18;
        }
    }
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        dp[a][b]=c;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][k]==1e18||dp[k][j]==1e18)continue;
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dp[i][i]!=0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j]==1e18)cout<<"INF";
            else cout<<dp[i][j];
            if(j!=n-1)cout<<" ";
        }
        cout<<endl;
    }
}


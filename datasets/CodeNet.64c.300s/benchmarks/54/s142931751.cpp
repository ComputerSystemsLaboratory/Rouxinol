#include <iostream>
using namespace std;
long long dp[100][21];
int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    dp[0][s]=1;
    for(int i=1;i<n-1;++i){
        int nn;
        cin>>nn;
        for(int j=0;j<21;++j){
            if(dp[i-1][j]&&j+nn>=0&&j+nn<=20)dp[i][j+nn]+=dp[i-1][j];
            if(dp[i-1][j]&&j-nn>=0&&j-nn<=20)dp[i][j-nn]+=dp[i-1][j];
        }
    }
    int ans;
    cin>>ans;
    cout<<dp[n-2][ans]<<endl;
}
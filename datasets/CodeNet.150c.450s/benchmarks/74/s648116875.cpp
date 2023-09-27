#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int INF=1e9;
const int maxn=50005;
int a[25];
int dp[maxn];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;i++)
        cin>>a[i];
    for (int i=0;i<=n;i++) dp[i]=INF;
    dp[0]=0;
    for (int i=1;i<=n;i++){
        for (int j=0;j<m;j++){
            if(a[j]<=i&&dp[i-a[j]]<dp[i])
                dp[i]=dp[i-a[j]]+1;
        }
    }
    cout<<dp[n]<<endl;
}
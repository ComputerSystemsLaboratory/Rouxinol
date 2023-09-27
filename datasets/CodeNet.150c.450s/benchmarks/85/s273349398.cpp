#include<iostream>
#include<algorithm>
using namespace std;

int n;
int r[101],c[101];
long long int dp[101][101];
int null = -1;
long long int ans;
long long int inf = 1<<24;
long long int dfs(int i,int j){
    long long int res=inf;
    if(dp[i][j] != null){
        return dp[i][j];
    }
    else if(i == j){
        res = 0;
    }
    else{
        for(int k=i;k<j;k++){
            res = min(dfs(i,k) + dfs(k+1,j) + r[i]*c[k]*c[j],res);
        }
    }

    dp[i][j] = res;
    //cout << i << " " << j << " " << dp[i][j] << endl;
    return res;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> r[i] >> c[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = null;
        }
    }
    ans = dfs(0,n-1);
    cout << ans << endl;
    return 0;

}

#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int n,a,chk=0,ans=0;
    int INF=(int)1e9;
    scanf("%d",&n);
    int dp[n];
    fill(dp,dp+n, INF);
    vector<int> l(n);
    for(auto&e:l){
        scanf("%d",&e);
    }
    for(int i=0;i<n;i++){
        *lower_bound(dp,dp+n, l[i])=l[i];
    }
    printf("%d\n",lower_bound(dp,dp+n, INF)-dp);
    return 0;
}
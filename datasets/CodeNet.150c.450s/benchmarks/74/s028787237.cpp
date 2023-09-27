#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> coin(m);
    for(auto&e:coin){
        scanf("%d",&e);
    }
    int INF=1<<18, MAX_N=50001;
    vector<int> dp_coin(MAX_N);
    fill(dp_coin.begin(), dp_coin.end(), INF);
    dp_coin[n]=0;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            if(i>=coin[j]){
                dp_coin[i-coin[j]]=min(dp_coin[i]+1,dp_coin[i-coin[j]]);
            }
        }
    }
    printf("%d\n",dp_coin[0]);
    return 0;
}
#include <cstdio>
#include <vector>
#include <algorithm>
#include<functional>

#define INF 50001
using namespace std;


int main(){
    vector<int> money;
    int n,m,c;
    scanf("%d %d",&n,&m);
    int dp[m][n+1];

    for(int i = 0;i < m;i++){
        scanf("%d",&c);
        money.push_back(c);
    }
    sort(money.begin(),money.end());
    for(int i = 0; i < m;i++){
        c = money[i];
        for(int j = 0; j <= n;j++){
            if(i == 0) dp[i][j] = j/c;
            else{
                int cnt1 = INF;
                int cnt2 = dp[i-1][j];
                if(j - c >= 0) cnt1 = dp[i][j-c] + 1;
                dp[i][j] = min(cnt1,cnt2);
            }
        }
    }

    printf("%d\n",dp[m-1][n]);
    return 0;
}

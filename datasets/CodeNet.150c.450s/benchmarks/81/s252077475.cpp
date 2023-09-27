#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
const int maxn = 15;
#define INF 0xfffff
int d[maxn][maxn];
int V, ans_num, ans_dis;
void init(){
    ans_dis = INF;
    for(int i = 0; i < maxn; i++){
        fill(d[i], d[i] + maxn, INF);
        d[i][i] = 0;
    }
}
void Floyd(){
    for(int k = 0; k <= V; k++)
        for(int i = 0; i <= V; i++)
            for(int j = 0; j <= V; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//                printf("d[%d][%d] = %d\n",i,j,d[i][j]);
            }
}
void solve(){
    Floyd();
    for(int i = 0; i <= V; i++){
        int sum_dis = 0;
        for(int j = 0; j <= V; j++)
            sum_dis += d[i][j];
        if(sum_dis < ans_dis){
            ans_dis = sum_dis;
            ans_num = i;
        }
    }
}
int main(){_
    int n;
    while(~scanf("%d",&n)){
        if(!n) break;
        V = 0;
        init();
        for(int i = 0; i < n; i++){
            int x, y, val;
            scanf("%d%d%d",&x, &y, &val);
            d[x][y] = d[y][x] = val;
//            printf("--d[%d][%d] = %d\n",x, y, d[x][y]);
            V = max(V, max(x, y));
        }
        solve();
        printf("%d %d\n",ans_num, ans_dis);
    }

    return 0;
}


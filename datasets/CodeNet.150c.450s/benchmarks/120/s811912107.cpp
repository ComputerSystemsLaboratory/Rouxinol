#include <cstdio>
#include <algorithm>
using namespace std;
int M[15][10005];
int r, c, ans;
void Dfs(int now){
    if(now == r){
        int res = 0;
        for(int i = 0; i < c; i++){
            int on = 0;
            for(int j = 0; j < r; j++)
                if(M[j][i] == 1) on++;
            res += max(on, r - on);
        }
        ans = max(ans, res);
        return ;
    }
    Dfs(now + 1);
    for(int i = 0; i < c; i++)
        M[now][i] = 1 - M[now][i];
    Dfs(now + 1);
}
int main(){
    while(~scanf("%d%d",&r, &c)){
        if(!r && !c) break;
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                scanf("%d", &M[i][j]);
        ans = 0; Dfs(0);
        printf("%d\n",ans);
    }

    return 0;
}

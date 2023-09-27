#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 105;
int h, w;
char Map[maxn][maxn];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
void Dfs(int x, int y, char c){
    Map[x][y] = '.';
    for(int i = 0; i < 4; i++){
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(xx >= 0 && xx < h && yy >= 0 && yy < w && Map[xx][yy] == c){
            Dfs(xx, yy, c);
        }
    }
}
int main(){
    while(~scanf("%d%d",&h, &w)){
        if(!h && !w) break;
        int ans = 0;
        for(int i = 0; i < h; i++)
            scanf("%s",Map[i]);
        for(int i = 0; i < h; i++){
            for(int j  = 0; j < w; j++){
                if(Map[i][j] != '.'){
                    ans++;
                    Dfs(i, j, Map[i][j]);
                }
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}


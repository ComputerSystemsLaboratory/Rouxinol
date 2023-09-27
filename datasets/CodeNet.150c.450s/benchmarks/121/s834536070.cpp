#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 111;
char gra[maxn][maxn];
int h, w;
int cnt;

void dfs(char ch, int row, int col);

int main(){
    while(scanf("%d%d", &h, &w)!=EOF &&(h||w)){
        for(int i = 0; i < h; ++i){
            scanf("%s", gra[i]);
        }
        cnt = 0;

        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                if(gra[i][j] == '#'){
                    dfs(gra[i][j], i, j);
                    ++cnt;
                }
                else if(gra[i][j] == '@'){
                    dfs(gra[i][j], i, j);
                    ++cnt;
                }
                else if(gra[i][j] == '*'){
                    dfs(gra[i][j], i, j);
                    ++cnt;
                }
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}

void dfs(char ch, int row, int col){
    gra[row][col] = 'v';
    if(gra[row+1][col] == ch && row+1 < h){
        dfs(ch, row+1, col);
    }
    if(gra[row-1][col] == ch && row-1 > -1){
        dfs(ch, row-1, col);
    }
    if(gra[row][col+1] == ch && col+1 < w){
        dfs(ch, row, col+1);
    }
    if(gra[row][col-1] == ch && col-1 > -1){
        dfs(ch, row, col-1);
    }
}
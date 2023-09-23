#include <stdio.h>

#define N 100

void dfs(int x, int y, int xs, int ys, char fld[]);

int main(){
    int ys,xs;
    
    
    while (scanf("%d%d", &ys, &xs), ys){
        char field[N*N+1];
        int cnt=0;
        
        for (int i=0; i<ys; i++){
            scanf("%s", field+(i*xs));
        }
        for (int i=0; i<ys; i++){
            for (int j=0; j<xs; j++){
                if (field[j+xs*i]!='.'){
                    dfs(j, i, xs, ys, field);
                    cnt++;
                }
            }
        }    

        printf("%d\n", cnt);
    }
    return 0;
}

void dfs(int x, int y, int xs, int ys, char fld[]){
    char here;
    here = fld[x+xs*y];
    fld[x+xs*y] = '.';
    for (int dx=-1; dx<=1; dx++){
        for (int dy=-1; dy<=1; dy++){
            if (dx*dy!=0) continue;
            int nx = x+dx;
            int ny = y+dy;
            if (nx < 0 || nx >= xs || ny < 0 || ny >=ys) continue;
            if (fld[nx+xs*ny]==here) dfs(nx, ny, xs, ys, fld);
        }
    }
    return;
}
#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 100;
char yard[MAX_N][MAX_N];
int h,w;
int dx[4]={-1,0,1,0}, dy[4]={0, 1, 0, -1};

void dfs(int, int, char);

int main(){
    while((scanf("%d%d",&h,&w))&& h!=0 && w!=0 ){
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf(" %c", &yard[i][j]);
        }
    }
    int cnt=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(yard[i][j]!='.') {dfs(i, j, yard[i][j]); cnt++;}
        }
    }
    printf("%d\n", cnt);
    }
}

void dfs(int x, int y, char ch){
    yard[x][y]='.';
    for(int i=0; i<4; i++){
        int nx = x+dx[i], ny = y+dy[i];
        if(nx>=0&& nx<h && ny>=0 && ny<w && yard[nx][ny]==ch)
            dfs(nx, ny, ch);
    }
    
}

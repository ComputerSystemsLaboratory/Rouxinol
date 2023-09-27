#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

const int dy[4] = {-1,0,1,0}, dx[4] = {0,1,0,-1};
int H,W,ans;
char fld[20][20];

void dfs(int y,int x){
    int ny,nx;
    ans++; fld[y][x] = '#';
    for(int i=0;i<4;i++){
        ny = y+dy[i]; nx = x+dx[i];
        if(0<=ny && ny<H && 0<=nx && nx<W && fld[ny][nx]=='.') dfs(ny,nx);
    }
}

int main(){
    int sy,sx;
    while(cin>>W>>H,H||W){
        ans = 0;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>fld[i][j];
                if(fld[i][j]=='@') sy = i, sx = j;
            }
        }
        dfs(sy,sx);
        printf("%d\n",ans);
    }
}
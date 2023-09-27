#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
#include<set>
#include<stack>
#include<functional>
#include<queue>
using namespace std;

const int dy[4] = {-1,0,1,0}, dx[4] = {0,1,0,-1};
int H,W;
char fld[100][100];

void dfs(int y,int x,char kind){
    int ny,nx;
    for(int i=0;i<4;i++){
        ny = y+dy[i]; nx = x+dx[i];
        if(ny<0 || H<=ny || nx<0 || W<=nx || fld[ny][nx]!=kind) continue;
        fld[ny][nx] = 0; dfs(ny,nx,kind);
    }
}

int main(){
    while(cin>>H>>W,H||W){
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                scanf(" %c",&fld[i][j]);
            }
        }
        int ans = 0;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(fld[i][j]==0) continue;
                ans++; dfs(i,j,fld[i][j]);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
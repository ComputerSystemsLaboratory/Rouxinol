#include <iostream>
#include <cstdio>
using namespace std;
 
char a[100][101];
int H,W,res;
int  dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
 
void dfs(int x,int y,char ch){
    a[y][x]='.';
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(0<=nx&&nx<W&&0<=ny&&ny<H&&a[ny][nx]==ch)dfs(nx,ny,ch);
    }
}
 
int  solve(){
    res=0;
    for(int i=0;i<H;i++){
        scanf("%s",a[i]);
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(a[i][j]=='@'||a[i][j]=='#'||a[i][j]=='*'){
                dfs(j,i,a[i][j]);
                res++;
            }
        }
    }
    return res;
}
 
int main() {
    while(1){
            cin>>H>>W;
        if(!H&&!W)break;
        cout<<solve()<<endl;
    }
        return 0;
}
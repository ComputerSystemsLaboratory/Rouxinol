#include<iostream>
#include<cstring>
using namespace std;
char Map[105][105];
bool vis[105][105];
int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int cnt;
int ans;
int W,H;
void dfs(int x,int y,char token){
    vis[x][y] = true;
    for(int i = 0;i < 4;i++){
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(xx >= 0 && xx < H && yy >= 0 && yy < W && Map[xx][yy] == token && !vis[xx][yy]){
            vis[xx][yy] = true;
            dfs(xx,yy,token);
        }
    }
}
int main(){

    while(cin>>H>>W){
        if(W == 0 && H == 0)
        break;
        cnt = 0;
        int sx,sy;
        memset(vis,false,sizeof(vis));
        for(int i = 0;i < H;i++){
            for(int j = 0;j < W;j++){
                cin>>Map[i][j];
            }
        }
        for(int i = 0;i < H;i++){
            for(int j = 0;j < W;j++){
                if(!vis[i][j]){
                    cnt++;
                    dfs(i,j,Map[i][j]);
                }


            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
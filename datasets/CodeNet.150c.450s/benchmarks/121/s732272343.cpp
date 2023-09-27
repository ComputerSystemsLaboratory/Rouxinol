#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#define pr(x) cout<<#x<<" "<<x;
#define pl(x) cout<<#x<<" "<<x<<endl;
#include<math.h>
#include<algorithm>
using namespace std;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
char maze[105][105];
int h,w;
void dfs(int x,int y,char c){
    maze[x][y] = '.';
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0&&nx<h&&ny>=0&&ny<w&&maze[nx][ny]==c){
            dfs(nx,ny,c);
        }
    }

}
int main(){


    while(cin>>h>>w,w>0){
        int ans = 0;
        getchar();
        for(int i = 0;i< h;i++){
            scanf("%s",&maze[i]);

        }
        for(int i = 0;i<h;i++){
            for(int j = 0;j<w;j++){
                if(maze[i][j]=='#')
                {
                  dfs(i,j,'#');
                  ans++;
                  continue;
                }
                if(maze[i][j]=='@')
                {
                  dfs(i,j,'@');
                  ans++;
                  continue;
                }
                if(maze[i][j]=='*')
                {
                  dfs(i,j,'*');
                  ans++;
                  continue;
                }
            }
        }
        cout<<ans<<endl;
    }

}
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
char maze[1005][1005];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int d[1005][1005];
const int INF = 0x7f7f7f7f;
typedef pair <int ,int > p;
queue <p> que;
int h,w;
void chushihua(){
    for(int i = 0;i<1005;i++){
        for(int j = 0;j<1005;j++){
            d[i][j] = INF;
        }
    }
}
int bfs(int x,int y,int gx,int gy){
    chushihua();
    d[x][y] = 0;
    que.push(p(x,y));
    while(que.size()){
        p cp = que.front();
        que.pop();
        if(cp.first==gx&&cp.second==gy){break;}
        for(int i = 0;i<4;i++){
            int nx = cp.first + dx[i];
            int ny = cp.second + dy[i];
            if(nx>=0&&nx<h&&ny>=0&&ny<w&&maze[nx][ny]!='X'&&d[nx][ny]==INF){

               que.push(p(nx,ny));
               d[nx][ny] = d[cp.first][cp.second] + 1;

            }
        }
    }
    while(que.size()){que.pop();}
    return d[gx][gy];


}
int main(){
    int n;
    cin>>h>>w>>n;
    int indexmap[n+5][4];
    getchar();
    for(int i = 0;i<h;i++){
        scanf("%s",&maze[i]);
    }
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            if(maze[i][j]=='S'){
                indexmap[0][0] = i;
                indexmap[0][1] = j;

            }
            else if((int)maze[i][j]>=49&&(int)maze[i][j]<=57){
                int index = maze[i][j]-'0';
                indexmap[index][0] = i;
                indexmap[index][1] = j;


            }
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += bfs(indexmap[i][0],indexmap[i][1],indexmap[i+1][0],indexmap[i+1][1]);
    }
    cout<<ans<<endl;

}
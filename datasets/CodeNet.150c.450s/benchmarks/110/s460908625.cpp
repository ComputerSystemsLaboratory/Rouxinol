#include<cstdio>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
struct qaq{
    int x,y,step;
    qaq(int a,int b,int c):x(a),y(b),step(c){}
};
char mmp[1005][1005];
bool vis[1005][1005];
int h,w,n,startx,starty,cur,nex[4][2]={0,1,0,-1,1,0,-1,0};
int bfs(int x,int y)
{
    queue<qaq> que;
    vis[x][y]=true;
    que.push(qaq(x,y,0));
    while(!que.empty()){
        qaq q=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int tx=q.x+nex[i][0];
            int ty=q.y+nex[i][1];
            if(tx<0||tx>=h||ty<0||ty>=w||vis[tx][ty]||mmp[tx][ty]=='X')
                continue;
            if(mmp[tx][ty]=='0'+cur){
                while(!que.empty()) que.pop();
                memset(vis,0,sizeof(vis));
                cur++;
                vis[tx][ty]=true;
                que.push(qaq(tx,ty,q.step+1));
                if(cur==n+1) return q.step+1;
                break;
            }
            vis[tx][ty]=true;
            que.push(qaq(tx,ty,q.step+1));
        }
    }
}
int main()
{
    cur=1;
    scanf("%d%d%d",&h,&w,&n);
    for(int i=0;i<h;i++){
        scanf("%s",mmp[i]);
        for(int j=0;j<w;j++){
            if(mmp[i][j]=='S') startx=i,starty=j;
        }
    }
    printf("%d\n",bfs(startx,starty));
    return 0;
}
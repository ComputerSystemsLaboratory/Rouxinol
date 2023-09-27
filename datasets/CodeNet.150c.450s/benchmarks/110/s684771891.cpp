#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
int H,W,N;
char mm[1005][1005];
bool v[1005][1005];
int xx,yy;
struct node{
    int x,y,step;
};
queue<node> que;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool check(int x,int  y){
    if(1<=x&&x<=H&&1<=y&&y<=W&&!v[x][y]&&mm[x][y]!='X')return true;
    else return false;
}
int bfs(int g){
    while(!que.empty())que.pop();
    node t;
    t.x=xx;
    t.y=yy;
    t.step=0;
    v[xx][yy]=1;
    que.push(t);
    while(!que.empty()){
        t=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(check(nx,ny)){
                if(mm[nx][ny]==g+'0'){
                    xx=nx;
                    yy=ny;
                    return t.step+1;
                }
                node tt;
                tt.x=nx;
                tt.y=ny;
                tt.step=t.step+1;
                v[nx][ny]=1;
                que.push(tt);
            }
        }
    }
}
int main(){
    while(~scanf("%d%d%d",&H,&W,&N)){
        for(int i=1;i<=H;i++){
            scanf("%s",mm[i]+1);
        }
        for(int i=1;i<=H;i++){
            for(int j=1;j<=W;j++){
                if(mm[i][j]=='S'){
                    xx=i;
                    yy=j;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=N;i++){
            memset(v,0,sizeof(v));
            ans+=bfs(i);
        }
        printf("%d\n",ans);
    }
    return 0; 
}

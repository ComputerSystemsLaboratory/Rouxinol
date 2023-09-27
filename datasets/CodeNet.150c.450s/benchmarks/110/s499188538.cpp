#include<cstdio>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
#define MAXN 1005
struct node{
    int x,y,step;
    node(int x=0,int y=0,int step=0):x(x),y(y),step(step) {}
};
char mp[MAXN][MAXN];
int vis[MAXN][MAXN];
int w,h,n;
int dir[10][10]={{1,0},{-1,0},{0,1},{0,-1}};
int bfs(node n1,node n2){
   memset(vis,0,sizeof(vis)); 
   queue<node>q;
   q.push(n1);
   while(!q.empty()){
       node tn=q.front();
       q.pop();
       for(int i=0;i<4;i++){
           int tx=tn.x+dir[i][0],ty=tn.y+dir[i][1];
           if(tx<0 || tx>=h || ty<0 || ty>=w) continue;
           if(vis[tx][ty]) continue;
           vis[tx][ty]=1;
           if(tx==n2.x && ty==n2.y) return tn.step+1;
           if(mp[tx][ty]!='X') q.push(node(tx,ty,tn.step+1));
       }
   }
} 
int main(){
    while(~scanf("%d%d%d",&h,&w,&n)){
        node n1,n2;
        for(int i=0;i<h;i++) scanf("%s",mp[i]);
        int ans=0;
        for(int i=0;i<h;i++) 
            for(int j=0;j<w;j++){
                if(mp[i][j]=='S') n1=node(i,j,0);
                if(mp[i][j]-'0'==1) n2=node(i,j,0);
            }
        ans+=bfs(n1,n2);
        for(int i=0;i<n-1;i++){
            for(int j=0;j<h;j++){
                for(int k=0;k<w;k++){
                    if(mp[j][k]-'0'==i+1) n1=node(j,k,0);
                    if(mp[j][k]-'0'==i+2) n2=node(j,k,0);
                }
            }
            ans+=bfs(n1,n2);
        }
        cout<<ans<<endl;
    }
    return 0;
}

#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

typedef struct{
 int x;
 int y;
}P;//表示坐?

char graph[1000][1000];
P aim[10];
P s,g;//s起点，g?点
int N,W,H;
int vis[1000][1000]; //用来存?距?
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

int bfs(P s,P g);

int main(){
    int i,j,t,step=0;
    cin>>H>>W>>N;

    for(i=0;i<H;i++)
    for(j=0;j<W;j++){
        cin>>graph[i][j];
      if(graph[i][j]<='9'&&graph[i][j]>='1'){
         t=graph[i][j]-'0';
         aim[t].x=i;
         aim[t].y=j;
      } //把1-N的坐?保存在 aim数?中
      else if(graph[i][j]=='S'){
          s.x=i;
          s.y=j;
          graph[i][j]='.';
      }//得到最初的起点
    }

    for(i=1;i<=N;i++){
       g.x=aim[i].x;
       g.y=aim[i].y;//1-N ，从小到大，?次把一个 作??点
       step+=bfs(s,g);
       s.x=g.x;
       s.y=g.y;//到??个?点后??点?起点
       graph[g.x][g.y]='.';
    }

    cout<<step<<endl;
     /*for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                printf("%c",graph[i][j]);
            }
            printf("\n");
        }
        */
}

int bfs(P s,P g){
    queue<P> que;
      P n;

    for(int i=0;i<H;i++)
    for(int j=0;j<W;j++)
     vis[i][j]=-1;

     que.push(s);
     vis[s.x][s.y]=0;

     while(que.size()){

       P p=que.front();
         que.pop();
       if(p.x==g.x&&p.y==g.y)
       break;

       for(int i=0;i<4;i++){
           n.x=p.x+dx[i];
           n.y=p.y+dy[i];//向四方漫射
        if(0<=n.x&&n.x<H&&0<=n.y&&n.y<W&&graph[n.x][n.y]!='X'&&vis[n.x][n.y]==-1){
               que.push(n);
               //graph[n.x][n.y]='#';
               vis[n.x][n.y]=vis[p.x][p.y]+1;
           }
       }
   }
     return vis[g.x][g.y];
}
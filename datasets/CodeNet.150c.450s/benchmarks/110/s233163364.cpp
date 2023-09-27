#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int m,n;
int che=1;
int k;
struct node{
  int x,y;
};
char mape[1111][1111];
int d[1111][1111];
int r[10];
queue<node> q;
int da[]={0,1,0,-1};
int db[]={1,0,-1,0};
void bfs(){
  while(!q.empty()&&che<=k){
    node nn;
    int x=q.front().x;
    int y=q.front().y;
    q.pop();
    if(mape[x][y]==che+'0'){
      mape[x][y]='.';
      r[che++]=d[x][y];
      memset(d,-1,sizeof(d));
      d[x][y]=r[che-1];
      while(!q.empty())q.pop();
      nn.x=x;
      nn.y=y;
      q.push(nn);
      return;
    }
    for(int i=0;i<4;i++)
      if(x+da[i]>=0&&x+da[i]<m&&y+db[i]>=0&&y+db[i]<n&&mape[x+da[i]][y+db[i]]!='X'&&d[x+da[i]][y+db[i]]==-1){
	int w=x+da[i];
	int e=y+db[i];
	d[w][e]=d[x][y]+1;
	nn.x=w;
	nn.y=e;
	q.push(nn);
      }
  }
}
int main(){
  cin>>m>>n>>k;
  while(!q.empty())q.pop();
  node nn;
  memset(d,-1,sizeof(d));
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
      cin>>mape[i][j];
      if(mape[i][j]=='S'){
	nn.x=i;
	nn.y=j;
	d[i][j]=0;
	q.push(nn);
	mape[i][j]='.';
      }
    }
  while(che<=k)bfs();
  cout<<r[k]<<"\n";
}
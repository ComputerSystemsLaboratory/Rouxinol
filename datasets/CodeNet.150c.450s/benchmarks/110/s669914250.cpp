#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=1;i<=n;i++)
typedef pair<int,int> P;
char a[1002][1002];
P f[12];
int d[1002][1002];

int bfs(P from,P to){
  loop(i,1000)loop(j,1000)d[i][j]=-1;
  queue<P>que;
  que.push(from);
  d[from.first][from.second]=0;
  int dir[5]={0,-1,0,1,0};
  while(!que.empty()){
    P p=que.front();que.pop();
    if(p.first==to.first&&p.second==to.second)break;
    loop(i,4){
      int qx=p.first+dir[i-1],qy=p.second+dir[i];
      if(a[qx][qy]!='X'&&d[qx][qy]==-1){
        que.push(P(qx,qy));
        d[qx][qy]=d[p.first][p.second]+1;
      }
    }
  }
  return d[to.first][to.second];
}

int main(){
  int h,w,n;
  char t;
  cin>>h>>w>>n;
  loop(i,1002)loop(j,1002)a[i-1][j-1]='X';
  loop(i,h)loop(j,w){
    cin>>t;
    if('1'<=t&&t<='9'){
      f[t-'0']=P(i,j);
    }else if(t=='S'){
      f[0]=P(i,j);
    }
    a[i][j]=t;
  }
  int c=0;
  loop(i,n){
    c+=bfs(f[i-1],f[i]);
  }
  cout<<c<<endl;
  return 0;
}
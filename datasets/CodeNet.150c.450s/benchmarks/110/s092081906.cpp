#include <iostream>
#include <queue>
#define N 1002
using namespace std;
int bfs(pair<int,int>,pair<int,int>);
int h,w,d[N][N];
string str[N];
int main(){
  int n,i,j,sum;
  pair<int,int> P[10];
  cin >> h >> w >> n;
  for(i=0;i<=w+1;i++) str[0]+='X',str[h+1]+='X';
  for(i=1;i<=h;i++) cin >> str[i],str[i]='X'+str[i]+'X';
  for(i=1;i<=h;i++){
    for(j=1;j<=w;j++){
      if(str[i][j]=='S') P[0].first=i,P[0].second=j;
      if('1'<=str[i][j]&&str[i][j]<='9'){
	P[str[i][j]-'0'].first=i;
	P[str[i][j]-'0'].second=j;
      }
    }
  }
  sum=bfs(P[0],P[1]);
  for(i=1;i<n;i++) sum+=bfs(P[i],P[i+1]);
  cout << sum << endl;
}
int bfs(pair<int,int> s,pair<int,int> g){
  int i,j,ret;
  pair<int,int> t;
  pair<int,int> u;
  queue< pair<int,int> > Q;
  for(i=1;i<=h;i++){
    for(j=1;j<=w;j++){
      d[i][j]=-1;
    }
  }
  Q.push(s);
  d[s.first][s.second]=0;
  while(Q.empty()!=1){
    u=Q.front();
    if(str[u.first][u.second]==str[g.first][g.second]){
      ret=d[u.first][u.second];
      break;
    }
    Q.pop();
    if(d[u.first][u.second-1]==-1&&str[u.first][u.second-1]!='X'){
      d[u.first][u.second-1]=d[u.first][u.second]+1;
      t.first=u.first;
      t.second=u.second-1;
      Q.push(t);
    }
    if(d[u.first][u.second+1]==-1&&str[u.first][u.second+1]!='X'){
      d[u.first][u.second+1]=d[u.first][u.second]+1;
      t.first=u.first;
      t.second=u.second+1;
      Q.push(t);
    }
    if(d[u.first-1][u.second]==-1&&str[u.first-1][u.second]!='X'){
      d[u.first-1][u.second]=d[u.first][u.second]+1;
      t.first=u.first-1;
      t.second=u.second;
      Q.push(t);
    }
    if(d[u.first+1][u.second]==-1&&str[u.first+1][u.second]!='X'){
      d[u.first+1][u.second]=d[u.first][u.second]+1;
      t.first=u.first+1;
      t.second=u.second;
      Q.push(t);
    }
  }
  return ret;
}
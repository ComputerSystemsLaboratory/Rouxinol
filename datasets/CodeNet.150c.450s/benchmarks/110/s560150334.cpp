#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
const int INF = 100000000;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

typedef pair< int, int > point;
int h,w,n;
char map[1002][1002];
int x[10],y[10];
int ans = 0;

int main(){
  scanf("%d %d %d",&h,&w,&n);
  for(int i=0;i<=h+1;i++){
    for(int j=0;j<=w+1;j++){
      if(i==0||j==0||i==h+1||j==w+1) map[i][j] = 'X';
      else scanf(" %c ",&map[i][j]);
      if(map[i][j]=='S'){
        x[0] = i;
        y[0] = j;
        map[i][j] = '.';
      }else if(map[i][j]!='.'&&map[i][j]!='X'){
        x[map[i][j]-48] = i;
        y[map[i][j]-48] = j;
        map[i][j] = '.';
      }
    }
  }
  for(int i=0;i<n;i++){
    queue<point> q;
    int d[1002][1002];
    fill(d[0],d[0]+1002*1002,INF);
    d[x[i]][y[i]] = 0;
    q.push(point(x[i],y[i]));
    while(true){
      point np = q.front();
      q.pop();
      int nx = np.first;
      int ny = np.second;
      if(nx==x[i+1]&&ny==y[i+1]){
        ans+=d[nx][ny];
        break;
      }
      for(int j=0;j<4;j++){
        if(map[nx+dx[j]][ny+dy[j]]=='.'){
          if(d[nx+dx[j]][ny+dy[j]]>d[nx][ny]+1){
            d[nx+dx[j]][ny+dy[j]] = d[nx][ny]+1;
            q.push(point(nx+dx[j],ny+dy[j]));
          }
        }
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}
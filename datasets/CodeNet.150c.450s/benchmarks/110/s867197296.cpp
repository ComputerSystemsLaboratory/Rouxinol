#include<cstdio>
#include<vector>
#include<queue>
#include<utility>
#define INF (1<<30)
using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int h,w,n;

bool canmove(int x,int y){
  return (0 <= x && x < w && 0 <= y && y < h);  
}

int main(){
  scanf("%d %d %d",&h,&w,&n);
  (void)getchar();
  vector<int> data(n+1);
  vector<vector<char> > map(h,vector<char>(w));

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      scanf("%c",&map[i][j]);
      if(map[i][j]=='S') map[i][j]='0';
      if('0' <= map[i][j] && map[i][j] <= '9') data[map[i][j]-'0']=i*2048+j;
    }
    (void)getchar();
  }
  
  vector<vector<int> > cost(n+1,vector<int>(n+1,0));
  for(int i=0;i<=n;i++){
    queue<pair<int,int> > q;
    pair<int,int> pii;
    vector<vector<int> > temp(h,vector<int>(w,-1));
    q.push(make_pair(data[i],0));
    while(!q.empty()){
      pii=q.front();
      int y=pii.first/2048;
      int x=pii.first%2048;
      q.pop();
      if(temp[y][x] != -1) continue;
      temp[y][x]=pii.second;

      for(int k=0;k<4;k++){
	if(canmove(x+dx[k],y+dy[k]) && map[y+dy[k]][x+dx[k]]!='X'){
	  q.push(make_pair((y+dy[k])*2048+x+dx[k],pii.second+1));
	}
      }
    }
    for(int j=0;j<=n;j++){
      cost[i][j]=temp[data[j]/2048][data[j]%2048];
    }
  }

  int _m=0;
  for(int i=0;i<n;i++){
    _m += cost[i+1][i];
  }
  printf("%d\n",_m);
  return 0;
}
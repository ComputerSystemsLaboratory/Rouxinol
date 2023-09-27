#include <iostream>
#include <queue>
using namespace std;

bool debug=true;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char d[21][21];

void init(){
  for(int i=0;i<21;i++)for(int j=0;j<21;j++)d[i][j]='#';
}

int dfs(int sx,int sy){
  int cnt=0;
  queue<int>que;
  que.push(sx);que.push(sy);
  while(que.size()){
    int x=que.front();que.pop();
    int y=que.front();que.pop();
    for(int i=0;i<4;i++){
      if(d[y+dy[i]][x+dx[i]]=='.'){
	que.push(x+dx[i]);que.push(y+dy[i]);
	d[y+dy[i]][x+dx[i]]='#';
	cnt++;
      }
    }
  }
  return cnt+1;
}

int main(){
  int w,h;
  
  while(1){
    cin>>w>>h;
    if(w==0&&h==0)break;
    init();
    int x,y;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>d[i][j];
	if(d[i][j]=='@'){
	  x=j;y=i;
	}
      }
    }
    cout<<dfs(x,y)<<endl;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く 
　　提出する問題を間違えない */
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
typedef pair<int,int> P;
void bfs(int sx,int sy);
int H,W,N,a;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int cheese_x[10];
int cheese_y[10];
char ch[1001][1001];
int al[1001][1001];
int S_x,S_y,hp = 1,dis;
int main(){
  cin >> H >> W >> N;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> ch[i][j];
      if(ch[i][j] == 'S'){
	S_x = j;
	S_y = i;
      }
    }
  }
  for(int i=0;i<N;i++){
    bfs(S_x,S_y);
  }
  
  cout << a << endl;
}
void bfs(int sx,int sy){
  queue<P> que;
  que.push(P(sx,sy));
  al[sy][sx] = a;
  while(!que.empty()){
    P now = que.front();que.pop();
    int x = now.first;
    int y = now.second;
    if(ch[y][x] - '0' == hp){
      hp++;
      S_x = x;
      S_y = y;
      a = al[y][x];
      
      memset(al,0,sizeof(al));
      
      break;
    }
    for(int i=0;i<4;i++){
      int mx = x + dx[i];
      int my = y + dy[i];
      if(mx < 0 || my < 0 || mx >= W || my >= H)continue;
      if(ch[my][mx] != 'X' && al[my][mx] == false){
	que.push(P(mx,my));
	al[my][mx] = al[y][x] + 1;
      }
    }
  }
}
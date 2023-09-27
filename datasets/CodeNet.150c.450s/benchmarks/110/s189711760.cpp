#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
typedef pair<int, int> pii;

#define S 'S'
#define X 'X'

#define W_MAX 1000

char map[W_MAX][W_MAX];
bool visited[W_MAX][W_MAX];

int main(){
  int H, W, N;
  cin >> H >> W >> N;

  pii pos; //rat position

  for(int i=0; i<H; i++){
    getchar();
    for(int j=0; j<W; j++){
      scanf("%c", &map[i][j]);
      if(map[i][j]==S){
	pos = make_pair(i,j);
      }
    }
  }

  int dx[] = {0, -1, 0 ,1}; int dy[] = {-1, 0, 1, 0};
  int ans=0;
  int next = 1; //next target num

  while(next <= N){
    for(int i=0; i<H; i++)
      for(int j=0; j<W; j++)
	visited[i][j]=false;

    queue<pair<pii, int> > q; //<pos, depth>
    q.push(make_pair(pos, 0));

    while(true){
      pair<pii, int> p = q.front(); q.pop();
      bool found = false;
      visited[p.first.first][p.first.second] = true;
      for(int i=0; i<4; i++){
	int nx = p.first.first + dx[i], ny=p.first.second + dy[i];
	if(nx>=0 && nx<H && ny>=0 && ny<W && visited[nx][ny]==false){
	  visited[nx][ny]= true;
	  if(map[nx][ny] == '0' + next){
	    found = true;
	    pos = make_pair(nx, ny);
	    break;
	  } else if(map[nx][ny]!=X){
	    q.push(make_pair(make_pair(nx, ny), p.second+1));
	  }
	}
      }
      if(found){
	ans += p.second+1;
	next++;
	break;
      }
    }
    while(!q.empty()) q.pop();
  }

  cout << ans << endl;

}
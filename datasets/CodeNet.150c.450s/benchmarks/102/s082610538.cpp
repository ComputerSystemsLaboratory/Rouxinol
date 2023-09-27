#include<iostream>
#include<queue>
#include<string>
#include<map>
#define F first
#define S second
using namespace std;

char c[33][33];
int w,h;

int solve(int x, int y){
  typedef pair < int, int > P;
  queue < P > que;
  int count = 1;

  que.push( P(x, y) );
  c[y][x] = '#';

  while(!que.empty()){
    P q = que.front(); que.pop();
    
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    
    for(int i=0;i<4;i++){
      int xx = dx[i] + q.F;
      int yy = dy[i] + q.S;

      if(xx < 0 || yy < 0 || xx == w || yy == h) continue;
      if(c[yy][xx] == '#') continue;

      c[yy][xx] = '#';
      que.push( P(xx, yy) );
      count++;
    }

  }

  return count;
}

int main(){

  int sx, sy;
  while(true){
    cin >> w >> h;
    if(!w && !h) break;

    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> c[i][j];
	if(c[i][j] == '@') sx = j, sy = i;
      }
    }

    cout << solve(sx, sy) << endl;
  }

}
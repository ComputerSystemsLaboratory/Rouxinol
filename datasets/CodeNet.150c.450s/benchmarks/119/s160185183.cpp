#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<random>
#include<map>
#include<queue>
using namespace std;

vector< vector<int> > bfs(int h, int w, int y, int x, vector< vector<int> > t, int g){
  vector< vector<bool> > b(h, vector<bool> (w, false));
  b[y][x] = true;
  queue< pair<int, int> > q;
  q.push( make_pair(x, y) );
  int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
  int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  while(true){
    if( q.empty() ) break;

    pair<int, int> p = q.front();
    q.pop();
    int px = p.first;
    int py = p.second;

    for(int dir=0; dir<8; dir++){
      int tx = px + dx[dir];
      int ty = py + dy[dir];

      if( tx < 0 || tx >= w || ty < 0 || ty >= h ) continue;
      if( b[ty][tx] ) continue;
      if( t[ty][tx] == 0 ) continue;

      b[ty][tx] = true;
      t[ty][tx] = g;
      q.push( make_pair(tx, ty) );
    }
  }

  return t;
}

int main(){

  int w, h;
  while(cin >> w >> h){
    if( w == 0 && h == 0 ) break;
    vector< vector<int> > t(h, vector<int> (w));
    int g = 2;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> t[i][j];
      }
    }

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if( t[i][j] == 1 ){
          t = bfs(h, w, i, j, t, g);
          g++;
        }
      }
    }
    cout << g-2 << endl;
  }

  return 0;
}
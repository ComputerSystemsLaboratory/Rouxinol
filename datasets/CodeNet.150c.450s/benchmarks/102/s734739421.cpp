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

int main(){

  int w, h;
  while(cin >> w >> h){
    if( w == 0 && h == 0 ) break;

    vector<string> t(h);
    for(int i=0; i<h; i++) cin >> t[i];
    int x, y;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if( t[i][j] == '@' ){
          x = j;
          y = i;
        }
      }
    }

    vector< vector<bool> > b(h, vector<bool> (w, false));
    b[y][x] = true;
    queue< pair<int, int> > q;
    q.push( make_pair(x, y) );
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    while(true){
      if( q.empty() ) break;

      pair<int, int> p = q.front();
      q.pop();
      int px = p.first;
      int py = p.second;

      for(int dir=0; dir<4; dir++){
        int tx = px + dx[dir];
        int ty = py + dy[dir];

        if( tx < 0 || tx >= w || ty < 0 || ty >= h ) continue;
        if( b[ty][tx] ) continue;
        if( t[ty][tx] == '#' ) continue;

        b[ty][tx] = true;
        q.push( make_pair(tx, ty) );
      }
    }
    int cnt = 0;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if( b[i][j] ) cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define loop(n) for(int lp=0; lp<(n); lp++)
#define ascent(i, a, b)  for(int (i)=(a); (i)<(b); (i)++)
#define descent(i, a, b) for(int (i)=(a); (i)<(b); (i)--)

int w, h;

int flg[60][60];
int m[60][60];

//int dx[4] = {-1, 0, 1, 0};
//int dy[4] = {0, 1, 0, -1};

stack<pair<int, int> > land;
void island(int x, int y) {
  if(x < 0 || w <= x || y < 0 || h <= y) return;

  land.push(make_pair(x, y));

  while(!land.empty()) {
    pair<int, int> p = land.top(); land.pop();

    int _x = p.first;
    int _y = p.second;
    //cout << " " << _x << "," << y << endl;

    if(m[_y][_x]) {
      //     cout << " " << x << "," << y << " is island" << endl;
      flg[_y][_x] = 1;
    }

    for(int dx = -1; dx <= 1; dx ++) {
      for(int dy = -1; dy <= 1; dy ++) {
	if(dx == 0 && dy == 0) continue;
	if(!flg[_y+dy][_x+dx] && 0 <= _x+dx && _x+dx < w && 0 <= _y+dy && _y+dy < h) {
	  //	    cout << "  " << _x+dx << "," << _y+dy << endl;
	  if(m[_y+dy][_x+dx]) {
	    land.push(make_pair(_x+dx, _y+dy));
	  }
	}
      }
    }
  }
}

int bfs() {
  int ans = 0;
  //  flg[0][0] = 1;

  ascent(y, 0, h) {
    ascent(x, 0, w) {
      if(!flg[y][x]) {
	flg[y][x] = 1;
	if(m[y][x]) {
	  ans ++;
	  //	  cout << " " << x << "," << y << endl;
	  island(x, y);
	}
      }
    }
  }

  return ans;
}

int main() {
  while(cin >> w >> h, w) {
    ascent(i, 0, h) {
      ascent(j, 0, w) {
	cin >> m[i][j];
	flg[i][j] = 0;
      }
    }

    cout << bfs() << endl;
  }
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

const static int MAX = 16;
int field[MAX+1][MAX+1];

int rec(int x,int y,int w,int h) {
  if(x == w && y == h) {
    return 1;
  }
  else if(x > w || y > h) {
    return 0;
  }
  else if(field[x][y] == -1) {
    return 0;
  }
  return rec(x+1,y,w,h) + rec(x,y+1,w,h);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int w,h,m;
  while(cin >> w >> h) {
    if( w+h == 0 ) break;
    for(int i=1;i<=h;i++) {
      for(int j=1;j<=w;j++) {
        field[i][j] = 0;
      }
    }
    cin >> m;
    for(int i=0;i<m;i++) {
      int x,y;
      cin >> x >> y;
      field[x][y] = -1;
    }

    cout << rec(1,1,w,h) << endl;
  }
}
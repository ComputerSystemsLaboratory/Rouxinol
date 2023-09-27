#include <iostream>
#include <string>
using namespace std;

bool field[30][30];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string compass = "NESW";

int main() {
  int n, m;

  while(cin >> n, n) {
    int nx = 10, ny = 10;
    int ans = 0;

    for(int i = 0; i < 30; i++) {
      for(int j = 0; j < 30; j++) {
	field[i][j] = false;
      }
    }

    for(int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      field[x][y] = true;
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
      string s; int d;
      cin >> s >> d;
      int pos;
      for(int j = 0; j < 4; j++) {
	if(compass.substr(j, 1) == s) pos = j;
      }

      for(int j = 1; j <= d; j++) {
	int tx = nx+dx[pos]*j, ty = ny+dy[pos]*j;
	if(field[ty][tx]) {
	  ans++;
	  field[ty][tx] = false;
	}
      }
      nx += dx[pos]*d, ny += dy[pos]*d;
    }
    
    if(ans == n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
 
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;


int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    bool map[21][21];
    for (int i = 0; i < 21; i++)
      for (int j = 0; j < 21; j++)
	map[i][j] = false;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      map[x][y] = true;
    }
    int m;
    cin >> m;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x, y;
    x = y = 10;
    map[x][y] = false;
    for (int i = 0; i < m; i++) {
      char d; int l;
      cin >> d >> l;
      int j = 0;
      switch(d) {
      case 'N': j = 0; break; 
      case 'E': j = 1; break;
      case 'S': j = 2; break;
      case 'W': j = 3; break;
      }
      for (int k = 0; k < l; k++) {
	x += dx[j]; y += dy[j];
	map[x][y] = false;
      }
    }
    bool flag = false;
    for (int i = 0; i < 21; i++) {
      for (int j = 0; j < 21; j++) {
	if (map[i][j]) {
	  flag = true;
	  break;
	}
      }
    }
    if (flag)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
}
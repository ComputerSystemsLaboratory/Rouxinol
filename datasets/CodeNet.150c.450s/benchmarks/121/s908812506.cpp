#include <iostream>
#include <string>
#define MAX_H 100
#define MAX_W 100
using namespace std;

string s[MAX_H];
bool visited[MAX_H][MAX_W];
int h, w;

int p[4] = {1, 0, -1, 0}, q[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
  visited[y][x] = true;
  for (int i = 0; i < 4; i++) {
    int x2 = x + p[i];
    int y2 = y + q[i];
    if (0 <= x2 && x2 < w && 0 <= y2 && y2 < h
	&& s[y][x] == s[y2][x2] && visited[y2][x2] == false) {
      dfs(y2, x2);
    }
  }
}
  
void init() {
  for (int i = 0; i < MAX_H; i++) {
    s[i] = "\0";
    for (int j = 0; j < MAX_W; j++) {
      visited[i][j] = false;
    }
  }
}

int main() {
  while (true) {
    cin >> h >> w;
    if (h == 0 && w == 0) return 0;

    init();

    for (int i = 0; i < h; i++)
      cin >> s[i];

    int count = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
	if (visited[i][j] == false) {
	  dfs(i, j);
	  count++;
	}
      }
    }

    cout << count << endl;
  }
}
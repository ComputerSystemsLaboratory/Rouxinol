#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct P {
  int x, y;
  P(int x, int y) : x(x), y(y) { }
};

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

int main() {
  for(int W, H; cin >> W >> H && W; ) {
    vector<string> M;
    queue<P> que;

    for(int y = 0; y < H; y++) {
      string line;
      cin >> line;

      M.push_back(line);

      for(int x = 0; x < W; x++) {
        if(M[y][x] == '@') {
          que.push(P(x, y));
        }
      }
    }

    int answer = 0;
    for(; !que.empty(); que.pop()) {
      P p = que.front();
      answer++;

      for(int i = 0; i < 4; i++) {
        int nx = p.x + dx[i], ny = p.y + dy[i];

        if(0 <= nx && nx < W && 0 <= ny && ny < H && M[ny][nx] == '.') {
          M[ny][nx] = '#';
          que.push(P(nx, ny));
        }
      }
    }

    cout << answer << endl;
  }
}
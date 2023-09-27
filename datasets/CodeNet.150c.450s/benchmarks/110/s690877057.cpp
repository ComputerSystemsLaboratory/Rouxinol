#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
#include <cctype>
using namespace std;

typedef tuple<int, int, int> st; // time, x, y
char F[1010][1010];
int H, W, N;
int X[10], Y[10];
int turn = 0;

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

bool isvalid(int x, int y) {
  return 0 <= x && x < H && 0 <= y && y < W && F[x][y] != 'X';
}

bool isgoal(int x, int y) {
  return isvalid(x, y) && x == X[turn+1] && y == Y[turn+1];
}

int main() {
  scanf("%d%d%d", &H, &W, &N);
  for (auto i=0; i<H; i++) {
    for (auto j=0; j<W; j++) {
      scanf(" %c", &F[i][j]);
      if (isdigit(F[i][j])) {
	int temp = (int)F[i][j] - '0';
	X[temp] = i;
	Y[temp] = j;
      } else if (F[i][j] == 'S') {
	X[0] = i;
	Y[0] = j;
      }
    }
  }
  int res = 0;
  for (turn = 0; turn < N; turn++) {
    bool visited[1010][1010];
    fill(&visited[0][0], &visited[0][0]+1010*1010, false);
    queue<st> Q;
    Q.push(make_tuple(0, X[turn], Y[turn]));
    while (!Q.empty()) {
      int time = get<0>(Q.front());
      int x = get<1>(Q.front());
      int y = get<2>(Q.front());
      Q.pop();
      if (isgoal(x, y)) {
	res += time;
	break;
      } else if (!visited[x][y]) {
	// cerr << "visit: (" << x << "," << y << ")" << endl; 
	visited[x][y] = true;
	for (auto k=0; k<4; k++) {
	  int nx = x + dx[k];
	  int ny = y + dy[k];
	  if (isvalid(nx, ny) && !visited[nx][ny]) {
	    Q.push(make_tuple(time+1, nx, ny));
	  }
	}
      }
    }
  }
  printf("%d\n", res);
}
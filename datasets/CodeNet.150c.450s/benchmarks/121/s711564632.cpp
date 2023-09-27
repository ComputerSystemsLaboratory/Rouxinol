#include <iostream>
#include <vector>
#define P 0
#define A 1
#define O 2
#define N -1

using namespace std;

void dfs(vector< vector<int> > &vec, int x, int y){
  int h = vec.size();
  int w = vec[0].size();

  int pos_val = vec[x][y];
  vec[x][y] = N;

  if (y - 1 >= 0 && vec[x][y-1] == pos_val) // left
    dfs(vec, x, y - 1);
  if (y + 1 <= w - 1 && vec[x][y+1] == pos_val) // right
    dfs(vec, x, y + 1);
  if (x - 1 >= 0 && vec[x-1][y] == pos_val) // top
    dfs(vec, x - 1, y);
  if (x + 1 <= h - 1 && vec[x+1][y] == pos_val) // down
    dfs(vec, x + 1, y);

  return;
}

int count_area (vector< vector<int> > &vec) {
  int h = vec.size(), w = vec[0].size(), count = 0;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (vec[i][j] != N) {
	dfs(vec, i, j);
	count++;
      }
    }
  }

  return count;
}

int main(int argc, char** argv){
  int h, w;

  while (cin >> h && cin >> w) {
    if (h == 0 && w == 0) break; // all case done

    vector< vector<int> > vec; vec.resize(h); for(int i = 0; i < h; i++) vec[i].resize(w);

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
	char tmp;
	cin >> tmp;

	if (tmp == '#')
	  vec[i][j] = P;
	else if (tmp == '@')
	  vec[i][j] = A;
	else if (tmp == '*')
	  vec[i][j] = O;
      }
    }

    cout << count_area(vec) << endl;
  }

  return 0;
}
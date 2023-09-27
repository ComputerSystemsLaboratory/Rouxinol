// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1165&lang=jp

#include <iostream>
#include <stdio.h>
#include <algorithm> // fill
#include <utility> // pair

using namespace std;

const int dir[4][2] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };

int main() {
  int N;
  while (scanf("%d", &N) != EOF && N) {
    int tiles[210][2];
    int max[2] = {1, 1};
    int min[2] = {0, 0};
    int n, d;
    tiles[0][0] = 0;
    tiles[0][1] = 0;
    for (int i=1; i<=N-1; i++) {
      // cerr << "i = " << i << endl;
      scanf("%d%d", &n, &d);
      for (int j=0; j<2; j++) {
	int temp = tiles[n][j];
	temp += dir[d][j];
	tiles[i][j] = temp;
	// cerr << temp << " ";
	if (max[j] < temp+1) max[j] = temp+1;
	if (min[j] > temp) min[j] = temp;
      }
      // cerr << endl;
    }
    // cerr << "max: " << max[0] << " " << max[1] << endl;
    // cerr << "min: " << min[0] << " " << min[1] << endl;
    printf("%d %d\n", max[0] - min[0], max[1] - min[1]);
  } 
}
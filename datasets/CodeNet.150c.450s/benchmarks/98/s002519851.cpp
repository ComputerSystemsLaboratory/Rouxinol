// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1153&lang=jp

#include <iostream>
#include <algorithm>
using namespace std;

void wa() {
  printf("%d\n", -1);
}

int main() {
  int n, m, s;
  while(scanf("%d%d", &n ,&m) != EOF && n && m) {
    int sum[2]; // 合計点
    sum[0] = sum[1] = 0;
    int cards[2][100]; // カード
    for (int i=0; i<n; i++) {
      scanf("%d", &s);
      cards[0][i] = s;
      sum[0] += s;
    }
    for (int i=0; i<m; i++) {
      scanf("%d", &s);
      cards[1][i] = s;
      sum[1] += s;
    }
    if ( (sum[0] - sum[1]) %2 != 0 ) {
      wa();
      continue;
    }
    int dif = (sum[0] - sum[1])/2;
    sort(cards[0], cards[0]+n);
    sort(cards[1], cards[1]+m);
    int cura = 0;
    int curb = 0;
    while (cura < n && curb < m) {
      if (cards[0][cura] - cards[1][curb] == dif) {
	printf("%d %d\n", cards[0][cura], cards[1][curb]);
	goto END;
      } else if (cards[0][cura] - cards[1][curb] > dif) {
	curb++;
      } else {
	cura++;
      }
    }
    wa();
  END: continue;
  }
}
#include <iostream>

// わからないから全部やる
// 全部といっても、pは100以下だけやれば絶対大丈夫(残りは小数の切り捨てに影響しない)。qはよくわからないから低めに見積もっておいてそれを+2くらいして調べきればいい。
// カッコ悪い解法で誠に申し訳ない。

using namespace std;

int x, y, s;
int p, q;

int main() {
  while (scanf("%d%d%d", &x, &y, &s) && x && y && s) {
    int max = 0;
    for (p=1; p<=100; p++) {
      int X = p * (100 + x) / 100;
      if (s - X > 0) {
	int qprime = 100 * (s-X) / (100 + x);
	for (q=qprime; q<=qprime+2; q++) {
	  int Y = q * (100 + x) / 100;
	  if (X + Y == s && p*(100+y)/100 + q*(100+y)/100 > max) {
	    max = p*(100+y)/100 + q*(100+y)/100; 
	  }
        }
      }
    }
  printf("%d\n", max);
  }
}
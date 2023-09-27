// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2018

#include <iostream>
using namespace std;

int main() {
  int N, M, P;
  int X;
  while (scanf("%d%d%d", &N, &M, &P) != EOF && N) {
    int sum = 0;
    int win = 0;
    for (int i=1; i<=N; i++) {
      scanf("%d", &X);
      sum += X;
      if (i == M) {
	win = X;
      }
    }
    if (win == 0) {
      printf("%d\n", 0);
    } else {
      printf("%d\n", 100*sum*(100-P)/(100*win));
    }
  }
}
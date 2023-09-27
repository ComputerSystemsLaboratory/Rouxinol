// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2149

#include <iostream>
using namespace std;

int main() {
  int N, A, B, C, X;
  int Y[110];
  while (scanf("%d%d%d%d%d", &N, &A, &B, &C, &X) != EOF && N) {
    int x = X;
    int count = -1;
    for (int i=0; i<N; i++) {
      scanf("%d", &Y[i]);
    }
    for (int i=0; i<N; i++) {
      do {
	count == -1 ? x = X : x = (A * x + B) % C;
	count++;
      } while (x != Y[i] && count <= 10000);
      if (count > 10000) {
	count = -1;
	break;
      }
    }
    printf("%d\n", count);
  }
}
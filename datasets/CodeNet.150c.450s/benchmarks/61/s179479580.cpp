#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int N, A, B, C, X;
  while (scanf("%d %d %d %d %d", &N, &A, &B, &C, &X) == 5) {
    if (N == 0 && A == 0 && B == 0 &&  C == 0 && X == 0) break;
    int Y[N];
    for (int i = 0; i < N; i++) {
      scanf(" %d", &Y[i]);
    }
    int index = 0;
    bool flag = true;
    for (int i = 0; i <= 10000; i++, X = (A * X + B) % C) {
      if (X == Y[index]) index++;
      if (index == N) {
	cout << i << endl;
	flag = false;
	break;
      }
    }
    if (flag) {
      cout << -1 << endl;
    }
  }
  return 0;
}
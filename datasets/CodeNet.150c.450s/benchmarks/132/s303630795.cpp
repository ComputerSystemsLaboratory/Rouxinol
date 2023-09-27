#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int N, P;

int main()
{
  while (scanf("%d %d ", &N, &P) == 2) {
    if (N == 0 && P == 0) {
      return 0;
    }
    vector<int> v(N);
    int p = P;
    for (int i = 0;; i = (i + 1) % N) {
      if (p == 0) {
	p += v[i];
	v[i] = 0;
      } else {
	v[i]++;
	p--;
      }
      if (v[i] == P) {
	printf("%d\n", i);
	break;
      }
    }
  }
}
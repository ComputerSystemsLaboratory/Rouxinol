#include <cstdio>
#include <algorithm>
using namespace std;
int m[101];
int main() {
  int a, mv = 0;
  while (~scanf("%d", &a)) {
    m[a]++;
    mv = max(m[a], mv);
  }
  for (int i = 1; i < 101; ++i) {
    if (m[i] == mv) printf("%d\n", i);
  }
}

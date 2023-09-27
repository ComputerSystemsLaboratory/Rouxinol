#include <cstdio>
using namespace std;
int memo[51];

int main() {
  for (int a = 0; a <= 9; ++a) {
    for (int b = 0; b <= 9; ++b) {
      for (int c = 0; c <= 9; ++c) {
        for (int d = 0; d <= 9; ++d) {
          memo[a + b + c + d]++;
        }
      }
    }
  }
  int n;
  while (~scanf("%d", &n)) {
    printf("%d\n", memo[n]);
  }
}

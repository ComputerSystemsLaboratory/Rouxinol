#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int ps[100];

int main() {
  for (int i=0; i<5; i++) {
    scanf("%d", &ps[i]);
  }
  sort(ps, ps+5, greater<int>());

  printf("%d", ps[0]);
  for (int i=1; i<5; i++) {
    printf(" %d", ps[i]);
  }
  puts("");
}
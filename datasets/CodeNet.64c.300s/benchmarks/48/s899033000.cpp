#include <cstdio>
#include <algorithm>
using namespace std;

int n;
bool is_composite[1000001];

int main() {
  while (1) {
    if (scanf("%d", &n) != 1) break;

    fill(is_composite, &is_composite[n+1], false);
    
    int cnt = 0;
    for (int i=2; i<=n; i++) {
      if (!is_composite[i]) {
        cnt++;
        for (int j=i+i; j<=n; j+=i) is_composite[j] = true;
      }
    }

    printf("%d\n", cnt);
  }
}
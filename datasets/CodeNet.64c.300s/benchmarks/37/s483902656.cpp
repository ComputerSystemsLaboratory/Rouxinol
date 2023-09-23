#include <iostream>
#include <cstdio>

using namespace std;

int N;

int main() {
  while (true) {
    scanf("%d ", &N);
    int cnt = 0;

    if (N == 0) {
      return 0;
    }
    
    for (int i = 1; i <= N - 1; i++) {
      for (int j = i + 1; j <= N - 1; j++) {
        int sum = 0;
        for (int k = i; k <= j; k++) {
          sum += k;
        }
        if (sum == N) {
          cnt++;
        }
      }
    }
    printf("%d\n", cnt);
  }
}
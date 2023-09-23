#include<cstdio>
using namespace std;

int N;

int main() {
  while (1) {
    scanf("%d", &N);
    if (N == 0) break;
    int counter = 0;
    for (int i = 1; i <= N / 2; i++) {
      for (int j = i + 1;; j++) {
        int sum = j * (j + 1) / 2 - (i - 1) * i / 2;
        if (sum > N) break;
        if (sum == N) counter++;
      }
    }
    printf("%d\n", counter);
  }
}


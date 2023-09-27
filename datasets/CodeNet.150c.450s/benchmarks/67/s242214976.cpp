#include <iostream>
using namespace std;

int sum(int n) {
  return n * (n+1) / 2;
}

int main() {
  int N;
  while(scanf("%d", &N) != EOF && N) {
    int ans = 0;
    for (int i=2; i<=N; i++) {
      for (int j=0; j<=i-2; j++) {
	if (sum(i) - sum (j) == N) {
	  ans++;
	}
      }
    }
    printf("%d\n", ans);
  } 
}
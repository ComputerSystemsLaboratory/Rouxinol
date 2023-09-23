#include<cstdio>
using namespace std;

int N, M, P, X[100];

int main() {
  while (1) {
    scanf("%d%d%d", &N, &M, &P);
    if (N == 0) break;
    M--;
    int sum = 0;
    for (int i = 0; i < N; i++) scanf("%d", &X[i]), sum += X[i];
    if (X[M] == 0) printf("0\n");
    else printf("%d\n", (100 - P) * sum / X[M]);
  }
}


#include <iostream>
#include <cstdio>
using namespace std;

int G[110][110];
int n;
int u, k, v;

void Hyoji(int N) {
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      printf("%d", G[i][j]);
      if (j < N-1) {
	printf(" ");
      }
    }
      printf("\n");
  }
}

int main() {
  fill(&G[0][0], &G[0][0]+110*110, 0);
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d%d", &u, &k);
    u--;
    for (int j=0; j<k; j++) {
      scanf("%d", &v);
      v--;
      G[u][v] = 1;
    }
  }
  Hyoji(n);
}
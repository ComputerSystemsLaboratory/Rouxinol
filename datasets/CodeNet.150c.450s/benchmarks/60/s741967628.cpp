#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define INFTY 2000000001
#define MAX 101

int n = 0;
int adl[MAX][MAX], deg[MAX];
int adm[MAX][MAX];

int main() {
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      adm[i][j] = 0;
    }
  }
  for ( int i = 0; i < n; i++ ) {
    int num;
    scanf("%d", &num);
    num--;
    scanf("%d", &deg[num]);
    for ( int j = 0; j < deg[num]; j++) {
      scanf("%d", &adl[num][j]);
      adl[num][j]--;
      adm[num][adl[num][j]] = 1;
    }
  }

  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n-1; j++ ) {
      printf("%d ", adm[i][j]);
    }
    printf("%d\n", adm[i][n-1]);
  }

  return 0;
}


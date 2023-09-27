#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for((i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef pair<int, int> PII;

const double EPS = 1e-10;

const int M = 2;
int a[M][M], b[M][M], w[M][M];
int n;

//???????£?
//recursive function(with/without memo)

void multiple_mat_ab_b() {
  int i, j, k;
  memset(w, 0, sizeof(w));
  for (i=0; i<M; i++)
    for (j=0; j<M; j++)
      for (k=0; k<M; k++)
        w[i][j] += a[i][k]*b[k][j];

  for (i=0; i<M; i++)
    for (j=0; j<M; j++)
        b[i][j] = w[i][j];
}

void multiple_mat_aa_a() {
  int i, j, k;
  memset(w, 0, sizeof(w));
  for (i=0; i<M; i++)
    for (j=0; j<M; j++)
      for (k=0; k<M; k++)
        w[i][j] += a[i][k]*a[k][j];

  for (i=0; i<M; i++)
    for (j=0; j<M; j++)
        a[i][j] = w[i][j];
}

void pow_mat_a(int k) {
  a[0][0] = a[0][1] = a[1][0] = 1;
  a[1][1] = 0;

  b[0][0] = b[1][1] = 1;
  b[0][1] = b[1][0] = 0;

  while (k) {
    if (k & 1) multiple_mat_ab_b();
    multiple_mat_aa_a();
    k >>= 1;
  }
}

int main() {
  scanf("%d ", &n);
  pow_mat_a(n);
  printf("%d\n", b[1][0]+b[1][1]);

	return 0;
}
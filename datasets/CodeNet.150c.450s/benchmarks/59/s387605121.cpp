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

const int N = 100;
int a[N];
int n;

int main() {
  int i, j, k;
  scanf("%d ", &n);
  for (i=0; i<n; i++)
    scanf("%d ", a+i);

  for (i=0; i<n; i++)
    printf("%d%c", a[i], (i == n-1) ? '\n' : ' ');

  for (i=1; i<n; i++) {
    int key = a[i]; 
    j = i - 1;
    while (j>=0 && a[j]>key) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = key;

    for (k=0; k<n; k++)
      printf("%d%c", a[k], (k == n-1) ? '\n' : ' ');
  }

	return 0;
}
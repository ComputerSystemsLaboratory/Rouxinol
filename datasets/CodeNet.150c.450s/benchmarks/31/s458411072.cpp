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

const int N = 200000;
int r[N];
int n;

int main() {
  int i, j;
  scanf("%d ", &n);
  for (i=0; i<n; i++)
    scanf("%d ", r+i);

/*
  //O(n^2):TLE
  int res = r[1] - r[0];
  for (i=0; i<n-1; i++)
    for (j=i+1; j<n; j++) {
      res = (res < r[j] - r[i]) ? r[j] - r[i] : res; 
    }
  printf("%d\n", res);
*/

/*
  //WA(miniが余計に更新されてmaxj-miniがおかしなことになる)
  int maxj = r[1];
  int mini = r[0];
  for (j=1; j<n; j++) {
    if (maxj-mini < r[j]-mini) {
      maxj = r[j];
      if (j < n-1 && r[j] < mini) mini = r[j];
    }
//    if (j < n-1 && r[j] < mini) mini = r[j];
  }
  printf("%d\n", maxj-mini);
*/

  //resにmax-minを持たせる(上のようにminiの更新で変なことにならない)
  int res = r[1] - r[0];
  int mini = r[0];
  for (j=1; j<n; j++) {
    if (res < r[j] - mini) res = r[j] - mini;
    if (r[j] < mini) mini = r[j];
  }

  printf("%d\n", res);

  return 0;
}
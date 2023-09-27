/*
 * d.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 200000;

/* typedef */

typedef long long ll;

/* global variables */

int as[MAX_N], ts[MAX_N];

/* subroutines */

ll invnum(int as[], int li, int ri) {
  if (li + 1 >= ri) return 0;

  ll cnt = 0;
  int mid = (li + ri) / 2;

  cnt += invnum(as, li, mid);
  cnt += invnum(as, mid, ri);

  int i = li, j = mid, k = li;
  while (i < mid && j < ri) {
    if (as[i] <= as[j]) ts[k++] = as[i++];
    else {
      cnt += mid - i;
      ts[k++] = as[j++];
    }
  }
  while (i < mid) ts[k++] = as[i++];
  while (j < ri) ts[k++] = as[j++];

  for (int i = li; i < ri; i++) as[i] = ts[i];

  return cnt;
}

/* main */

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> as[i];

  ll cnt = invnum(as, 0, n);
  printf("%lld\n", cnt);
  return 0;
}
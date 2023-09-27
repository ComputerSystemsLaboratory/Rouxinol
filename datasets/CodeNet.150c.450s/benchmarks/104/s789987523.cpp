#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <ctime>
#include <iostream>
#include <functional>
#include <complex>
#pragma comment(linker, "/STACK:836777216")

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<pii, int> p3i;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<p3i> v3i;
typedef vector<vii> vvii;
typedef vector<p3i> vp3i;
typedef long double ld;
typedef vector<ld> vld;

#define pb push_back
#define mp make_pair
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define REPD(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define FORD(i,a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define sz(v) (int)(v).size()
#define all(v) (v).begin(), (v).end()
#define rv(v) reverse(all(v))
#define CL(v, val) memset((v), (val), sizeof((v)))
#define SORT(a) sort(all(a))
#define un(v) SORT(v), (v).resize(unique(all(v)) - (v).begin())
#define eps 1.0e-7
#define X first
#define Y second
#define bit(n) (1 << (n))
#define bit64(n) (ll(1) << (n))
#define sqr(n) ((n) * (n))
#define N 35

int a[N];

int main(void) {
  int w;
  scanf("%d", &w);
  REP(i, w) {
    a[i] = i + 1;
  }
  int n;
  scanf("%d", &n);
  REP(i, n) {
    int x,y;
    scanf("%d,%d", &x, &y);
    x--,y--;
    swap(a[x],a[y]);
  }

  REP(i, w) {
    printf("%d\n", a[i]);
  }
}
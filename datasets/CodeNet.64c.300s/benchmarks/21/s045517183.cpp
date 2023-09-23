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
#include <iomanip>
#pragma comment(linker, "/STACK:836777216")

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef pair<pii, int> p3i;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;
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

ll DET(ll a, ll b, ll c, ll d) {
  return a * d - b * c;
}

int main(void) {
  ll a,b,c,d,e,f;
  while (scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e, &f) == 6) {
    ll det = DET(a,b,d,e);
    ll det1 = DET(c,b,f,e);
    ll det2 = DET(a,c,d,f);
    double x = 1.0 * det1 / det;
    double y = 1.0 * det2 / det;
    printf("%.3lf %.3lf\n", x + eps, y + eps);
  }
  return 0;
}
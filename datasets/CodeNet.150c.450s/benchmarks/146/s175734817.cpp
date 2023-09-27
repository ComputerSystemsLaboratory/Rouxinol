#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <complex>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const double PI = 3.141592653589793238462643383279502884L;
const int LARGE_PRIME = 1000000007;
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rtr(c, i) for(auto i = (c).rbegin(); i != (c).rend(); i++)
#define repfn(i,a,cont,next) \
  for(auto i = (a); [=](){return(cont);}(); i = [=](){return(next);}())
#define repby(i,a,b,s) repfn(i,a,i<b,i+s)
#define repab(i,a,b) repby(i,a,b,1)
#define rep(i,b) repab(i,0,b)
#define pb push_back
#define sz(c) int((c).size())

typedef complex<double> P;
const double precision = 1e-10;

bool EQ(double d, double e)
{
  return abs(d - e) < precision;
}

double cross(P a, P b)
{
  return a.real() * b.imag() - a.imag() * b.real();
}

bool parallel(P a, P b)
{
  return EQ(cross(a, b), 0.0);
}

int main(int argc, char **argv)
{
  vector<P> v(4);
  double x, y;
  int n;
  cin >> n;
  while (n--) {
    rep (i, 4) {
      cin >> x >> y;
      v[i] = P(x, y);
    }
    P p = v[1] - v[0];
    P q = v[3] - v[2];
    if (parallel(v[1] - v[0], v[3] - v[2]))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
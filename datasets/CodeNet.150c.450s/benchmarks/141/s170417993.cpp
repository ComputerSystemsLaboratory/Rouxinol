#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

struct point{ double x, y; };

point sub(const point& a, const point& b){
  point ret;
  ret.x = a.x - b.x;
  ret.y = a.y - b.y;
  return ret;
}

int solve(point a, point b, point c, point p){
  point ab = sub(b, a), bp = sub(p, b);
  point bc = sub(c, b), cp = sub(p, c);
  point ca = sub(a, c), ap = sub(p, a);

  double c1 = ab.x * bp.y - ab.y * bp.x;
  double c2 = bc.x * cp.y - bc.y * cp.x;
  double c3 = ca.x * ap.y - ca.y * ap.x;

  if((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0)) return 1;
  return 0;
}

int main(){
  double x1, x2, x3, xp, y1, y2, y3, yp;
  while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)){
    point a, b, c, P;
    a.x = y1; a.y = x1;
    b.x = y2; b.y = x2;
    c.x = y3; c.y = x3;
    P.x = yp; P.y = xp;

    if(solve(a, b, c, P)) puts("YES");
    else puts("NO");
  }
  return 0;
}
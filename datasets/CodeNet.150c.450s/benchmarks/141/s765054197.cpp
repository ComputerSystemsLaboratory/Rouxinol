//#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define IN(a, b, x) (a<=x&&x<b)
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

struct Vector2D{
	double x, y;
};

Vector2D sub_vector(const Vector2D& a, Vector2D& b) {
	Vector2D ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}

//?????´?????? true ?????´?????? false
bool hit(Vector2D A, Vector2D B, Vector2D C, Vector2D P) {
	Vector2D AB = sub_vector(B, A);
  Vector2D BP = sub_vector(P, B);

  Vector2D BC = sub_vector(C, B);
  Vector2D CP = sub_vector(P, C);

  Vector2D CA = sub_vector(A, C);
  Vector2D AP = sub_vector(P, A);

  double c1 = AB.x * BP.y - AB.y * BP.x;
  double c2 = BC.x * CP.y - BC.y * CP.x;
  double c3 = CA.x * AP.y - CA.y * AP.x;

  if( ( c1 > 0 && c2 > 0 && c3 > 0 ) || ( c1 < 0 && c2 < 0 && c3 < 0 ) ) {
    return false;
  }

  return true;
}

signed main(void)
{
	double x1,x2,x3,xp,y1,y2,y3,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp) {
		Vector2D a = {x1, y1}, b = {x2, y2}, c = {x3, y3}, p = {xp, yp};
		if(hit(a, b, c, p)) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}
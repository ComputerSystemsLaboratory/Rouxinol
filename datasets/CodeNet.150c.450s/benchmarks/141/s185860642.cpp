#include <cstdio>
#include <complex>
#include <vector>
#include <cmath>

using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)

typedef complex<double> P;
typedef vector<P> VP;
const double EPF = 1e-9;

#define X real()
#define Y imag()
#define EQ(x,y) (abs(x-y) < EPF)

double dot(P a, P b) {
  return (conj(a)*b).X;
}
double cross(P a, P b) {
  return (conj(a)*b).Y;
}
double distPP(P a, P b) {
  return sqrt(dot(a-b,a-b));
}
P crosspoint(P a, P b, P c, P d) {//ac , bd
  double d1 = cross(d-b,b-a);
  double d2 = cross(d-b,c-a);
  if(EQ(d1,0) & EQ(d2,0)) return a;
  if(EQ(d2,0)) return a;
  return a + (c-a)*d1/d2;
}
P normal_vector(P a) {
  P b(-a.Y, a.X);
  return b;
}


int main() {
  VP vp;

  while(1) {
    REP(i,4) {
      double x,y;
      if(scanf("%lf %lf", &x, &y) == EOF) {
	vp.clear();
	return 0;
      }
      vp.push_back(P(x,y));
    }
    double d1 = cross(vp[1]-vp[0],vp[3]-vp[0]);
    double d2 = cross(vp[2]-vp[1],vp[3]-vp[1]);
    double d3 = cross(vp[0]-vp[2],vp[3]-vp[2]);
    if((d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0)) printf("YES\n");
    else printf("NO\n");
    vp.clear();
  }
  
  return 0;
}
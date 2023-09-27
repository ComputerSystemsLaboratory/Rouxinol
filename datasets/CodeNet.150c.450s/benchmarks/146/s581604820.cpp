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
const double EPF = 1e-10;

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
P polar(double r, double theta) {
  P a(r*cos(theta),r*sin(theta));
  return a;
}

int main() {
  int n;
  scanf("%d",&n);
  REP(i,n) {
    double x,y;
    P a,b,c,d;
    scanf("%lf %lf", &x, &y);
    a = P(x,y);
    scanf("%lf %lf", &x, &y);
    b = P(x,y);
    scanf("%lf %lf", &x, &y);
    c = P(x,y);
    scanf("%lf %lf", &x, &y);
    d = P(x,y);
    
    if(EQ(cross(a-b, c-d),0))printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
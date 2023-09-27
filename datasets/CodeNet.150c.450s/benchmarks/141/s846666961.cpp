#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <complex>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << #x << " = " << (x) << endl;


#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010

typedef double P_type;
typedef complex<P_type> P;
const P_type P_eps = 1e-9; //??´??°???????????????

namespace std{
  template<class T> bool operator<(const complex<T> &a, const complex<T> &b){
    return a.real() == b.real() ? a.imag() < b.imag() : a.real() < b.real();
  }
};

P rotate(P p, double theta){
  return p * P(cos(theta), sin(theta));
}

//??????
double dot(P a, P b) {
  return (a * conj(b)).real();
}

//??????
double cross(P a, P b) {
  return (a * conj(b)).imag();
}

//???????¨???????
int ccw(P a, P b, P c){
  if(cross(b-a,c-a) > P_eps) return 1; //COUNTER_CLOCKWISE
  if(cross(b-a,c-a) < -P_eps) return -1; //CLOCKWISE
  if(dot(b-a,c-a) < P_eps) return -2; //c -> a -> b
  if(dot(a-b,c-b) < P_eps) return 2; //a -> b -> c
  return 0; //a -> c -> b
}

/* ??????ab??¨???c????????¢ */
double distanceSP(P a, P b, P c) {
  if ( dot(b-a, c-a) < P_eps ) return abs(c-a);
  if ( dot(a-b, c-b) < P_eps ) return abs(c-b);
  return abs(cross(b-a, c-a)) / abs(b-a);
}

/* ??´???ab??¨???c????????¢ */
double distanceLP(P a, P b, P c) {
  return abs(cross(b-a, c-a)) / abs(b-a);
}

/* ????????????????????? */
double isContainedCP(P c, double r, P p){
  return abs(c-p) < r - P_eps; //?????¨??????????????????
  //return abs(c-p) < r + P_eps; //?????¨????????????
}

/* ??´??????????????? */
bool isIntersectedLL(P a1, P a2, P b1, P b2){
  return abs(cross(a1-a2, b1-b2)) > P_eps;
}

/* ?????????????????? */
bool isIntersectedSS(P a1, P a2, P b1, P b2){
  
  //??????a ??¨ ??´???b
  P_type a = ccw(b1,b2,a1);
  P_type b = ccw(b1,b2,a2);
  
  //??????b ??¨ ??´???a
  P_type c = ccw(a1,a2,b1);
  P_type d = ccw(a1,a2,b2);
  
  return a*b < P_eps && c*d < P_eps; // T?????????????????? -P_eps
}

/* ??????????????? */
bool isIntersectedCC(P c1, double r1, P c2, double r2){
  double dist = abs(c1 - c2);
  
  return abs(r1 - r2) < dist + P_eps && dist - P_eps < r1 + r2; //?????\?????\?????????
  //return abs(r1 - r2) < dist - P_eps && dist + P_eps < r1 + r2; //?????\?????\?????????
}

/* ?????´??????????????? */
bool isIntersectedCL(P c, double r, P a1, P a2){
  return distanceLP(a1, a2, c) < r + P_eps; //??\????????´????????????????????´??? - P_eps
}

/* ????????????????????? */
bool isIntersectedCS(P c, double r, P a1, P a2){
  return isContainedCP(c,r,a1) &&
    isContainedCP(c,r,a2) &&
    distanceLP(a1, a2, c) < r + P_eps; //??\????????´????????????????????´??? - P_eps
}

/* ??´???/???????????? */
P getCrosspointLL(P a1, P a2, P b1, P b2) {
  //assert(isIntersectedLL(a1, a2, b1, b2));
  //assert(isIntersectedSS(a1, a2, b1, b2));
  P a = a2 - a1;
  P b = b2 - b1;
  return a1 + a * cross(b, b1-a1) / cross(b, a);
}

P getCrosspointSS(P a1, P a2, P b1, P b2){
  return getCrosspointLL(a1, a2, b1, b2);
}

/* ????????? */
pair<P,P> getCrosspointCC(P c1, double r1, P c2, double r2){
  //assert(isIntersectedCC(c1, r1, c2, r2));
  
  double dist = abs(c1 - c2);
  double a = acos((r1*r1 + dist * dist - r2 * r2) / (2 * r1 * dist));
  return {c1 + polar(r1, arg(c2 - c1) + a), c1 + polar(r1, arg(c2 - c1) - a)};
}

/* ??????????????? */
pair<P,P> getCrosspointCS(P c, double r, P a1, P a2){
  //assert(isIntersectedCS(c1, r1, c2, r2));
  
  P base1 = a2 - a1;
  P proj = a1 + base1 * dot(c - a1, base1) / norm(base1); //?°???±
  P e = (a2 - a1) / abs(a2 - a1);
  P base2 = sqrt(r*r - norm(proj - c));
  return {proj + e*base2, proj - e*base2};
}

bool iscontained(vector<P> &g, P p){
  int n = g.size();
  bool f = false;
  for(int i=0;i<n;i++){
    P a = g[i] - p, b = g[(i+1)%n] - p;
    if(abs(cross(a,b)) < P_eps && dot(a,b) < P_eps) return false;
    if(a.imag() > b.imag()) swap(a,b);
    if(a.imag() < P_eps && P_eps < b.imag() && cross(a,b) > P_eps) f = !f;
  }
  return f;
}

bool solve(){

  vector<P> points;
  
  for(int i=0;i<3;i++){
    double x,y;

    if(scanf("%lf%lf",&x,&y) == EOF) return false;

    points.push_back(P(x,y));
  }

  double xp, yp;

  scanf("%lf%lf",&xp,&yp);

  if(iscontained(points,P(xp,yp))){
    puts("YES");
  }else{
    puts("NO");
  }

  return true;
}

int main(){

  while(solve());  
  
  return 0;
}
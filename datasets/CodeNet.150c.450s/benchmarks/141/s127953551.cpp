#include <vector>
#include <iostream>
#include <complex>

#define fs first
#define sc second

using namespace std;

typedef double D;
typedef complex<D> P;
typedef pair<P, P> L;
const D EPS=1e-12;


namespace std{
  bool operator<(const P &a, const P &b){
    return real(a)==real(b)?imag(a)<imag(b):real(a)<real(b);
  }
}

D dot(P x, P y){return real(conj(x)*y);}

D cross(P x, P y){return imag(conj(x)*y);}

int ccw(P a, P b, P c){
  b -= a; c -= a;
  if(cross(b, c) > EPS) return 1;
  if(cross(b, c) < -EPS) return -1;
  if(dot(b, c) < -EPS) return 2;
  if(abs(b) < abs(c)) return -2;
  return 0;
}

bool para(L a, L b){return abs(cross(a.fs - a.sc, b.fs-b.sc))<EPS;}

int main(){
    D x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin >>  x1 >> y1 >> x2 >> y2 >>  x3>> y3>> xp >> yp){
    P A = P(x1, y1);
    P B = P(x2, y2);
    P C = P(x3, y3);
    P p = P(xp, yp);
    if(ccw(A, B, p) == ccw(B, C, p) && ccw(B, C, p) == ccw(C, A, p)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
    }
    return 0;
}




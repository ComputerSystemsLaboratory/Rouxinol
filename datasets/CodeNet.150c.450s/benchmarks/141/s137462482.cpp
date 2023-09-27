#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<complex>
using namespace::std;
typedef complex<double> P;


double cross(P a, P b){
  return a.real()*b.imag() - a.imag()*b.real();
}

double dot(P a, P b){
  return a.real()*b.real() + a.imag()*b.real();
}

int ccw(P a, P b, P c){
  b -= a; c -= a;
  if(cross(b, c) > 0) return 1;
  if(cross(b, c) < 0) return -1;
  if(dot(b, c) < 0) return 2;
  if(norm(b) < norm(c)) return -2;
  return 0;
}

int main(){

  int r1, r2, r3;
  float x1, x2, x3, xp, y1, y2, y3, yp;

  for(;;){
    if(scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) == EOF){
      break;
    }
  P p1 = P(x1, y1);
  P p2 = P(x2, y2);
  P p3 = P(x3, y3);
  P p4 = P(xp, yp);

  r1 = ccw(p1, p2, p4);
  r2 = ccw(p2, p3, p4);
  r3 = ccw(p3, p1, p4);

  if((r1 == -1) && (r2 == -1) && (r3 == -1)){
    printf("YES\n");
  }else if ((r1 == 1) && (r2 == 1) && (r3 == 1)){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  }
  return 0;
}
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

D cross(P x, P y){return imag(conj(x)*y);}

bool para(L a, L b){return abs(cross(a.fs - a.sc, b.fs-b.sc))<EPS;}

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    D x1, y1, x2, y2, x3, y3, x4, y4;
    cin >>  x1 >> y1 >> x2 >> y2 >>  x3>> y3>> x4>> y4;
    P A = P(x1, y1);
    P B = P(x2, y2);
    P C = P(x3, y3);
    P D = P(x4, y4);
    L AB = L(A, B);
    L CD = L(C, D);
    if(para(AB, CD)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}




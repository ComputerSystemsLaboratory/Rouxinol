#include<iostream>
#include<complex>
#include<vector>
using namespace std;
typedef complex < double > P;
typedef vector< P > G;
const double EPS = 1e-8;
const double INF = 1e12;
double cross(const P& a,const P& b){ //外積
  return imag(conj(a) * b);
}
double dot(const P& a,const P& b){ // 内積
  return real(conj(a) * b);
}
#define curr(P,i) P[i]
#define next(P,i) P[(i+1)%P.size()]
bool conteins(const G& Q, const P& p){
  bool in = false;
  for(int i = 0 ; i < Q.size() ; i++ ){
    P a = curr(Q,i) - p, b = next(Q,i) - p;
    if(imag(a) > imag(b)) swap(a,b);
    if(imag(a) <= 0 && 0 < imag(b) && cross(a,b) < 0) in = !in;
    if(cross(a,b) == 0 && dot(a,b) <= 0) return true;
  }
  return in;
}

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    G g(3);
    g[0] = P(x1,y1);
    g[1] = P(x2,y2);
    g[2] = P(x3,y3);
    cout << (conteins(g,P(xp,yp)) ? "YES" : "NO") << endl;
  }
}
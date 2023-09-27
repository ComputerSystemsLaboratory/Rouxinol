#include <iostream>
#include <cmath>
#define EPS 1e-10
using namespace std;

struct P {
  P(){}
  double x,y;
  P(double x,double y):x(x),y(y){}
};

double det(P ab,P cd){
  return ab.x * cd.y - ab.y*cd.x; 
}
int main(){
  P a,b,c,d;
  int n;
  cin >> n;
  while(n--) {
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    P ab,cd;
    ab = P(b.x - a.x,b.y - a.y);
    cd = P(d.x - c.x,d.y - c.y);
    if(abs(det(ab,cd)) < EPS)cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
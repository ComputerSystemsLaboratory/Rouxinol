#include <iostream>
#include <complex>
#include <cmath>
#include <string>
using namespace std;
typedef complex<double> C;
#define EPS (1e-8)
#define EQ(a,b) (abs((a)-(b)) < EPS)
const string mes[2] = {"YES","NO"};
double cross(C a, C b) {
  return a.real()*b.imag() - a.imag()*b.real();
}

bool is_paralelle(C a, C b) {
  return EQ(cross(a,b), 0.0);
}

void solve() {
  double x1, y1, x2, y2, x3, y3, x4, y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  
  C a(x1, y1), b(x2, y2), c(x3, y3), d(x4, y4);
    
  int res = (is_paralelle(a-b, c-d))?0:1;
  cout<<mes[res]<<endl;
}

int main (int argc, char const* argv[]) {
  int n; cin>>n;
  for(int i=0;i<n;i++) solve();
  return 0;
}
#include<iostream>
#include<complex>
#include<cmath>
#include<string>
#include<queue>
using namespace std;
typedef complex<double> xy_t;
int main()
{
  const double eps = 1e-11;
  int n;
  double x[4],y[4];
  queue<string> qs;
  cin >> n;
  for( int i = 0; i < n; ++i){
    xy_t p[4];
    for( int j = 0; j < 4; ++j){
      cin >> x[j] >> y[j];
      p[j] = xy_t(x[j],y[j]);
    }
    double S;
    S =(conj(p[0] - p[1])*(p[2] - p[3])).imag();
    if( abs(S) < eps) qs.push("YES");
    else qs.push("NO");
  }
  while(!qs.empty()){
    cout << qs.front() << endl;
    qs.pop();
  }
}
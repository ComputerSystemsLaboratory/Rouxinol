#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> comp;

const double EPS = 1e-10;

int main(){
  int n;
  cin >> n;
  while(n--){
    comp p[4];
    for(int i=0; i<4; i++){
      double x,y;
      cin >> x >> y;
      p[i] = comp(x,y);
      p[i] -= p[i/2*2]*(double)(i%2);
    }
    if(abs(sin(arg(p[1]/p[3]))) < EPS)
      cout << "YES";
    else cout << "NO";
    cout << endl;
  }
  return 0;
}

  
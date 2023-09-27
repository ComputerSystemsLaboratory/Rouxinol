#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  double x[4],y[4];

  cin >> n;
  while(n--){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    y[1]-=y[0];
    x[1]-=x[0];
    y[3]-=y[2];
    x[3]-=x[2];
    if(fabs(y[1]*x[3] - y[3]*x[1]) < 10e-12)cout << "YES";
    else cout << "NO";
    cout << endl;
    }
  return 0;
}
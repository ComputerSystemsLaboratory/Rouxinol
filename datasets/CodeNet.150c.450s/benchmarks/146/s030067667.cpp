#include <iostream>
using namespace std;

int main(){
  int n, i;
  long double x1, x2, x3, x4, y1, y2, y3, y4, slopeofAB, slopeofCD;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    slopeofAB = (y2 - y1) / (x2 - x1);
    slopeofCD = (y4 - y3) / (x4 - x3);

    if(slopeofAB == slopeofCD){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }

  return 0;
}
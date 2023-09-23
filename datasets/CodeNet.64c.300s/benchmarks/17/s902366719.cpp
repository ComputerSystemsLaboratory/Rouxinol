#include <iostream>
#include <algorithm>
using namespace std;

inline int deTax(int rate, double yen){
  return yen * 100 / (100 + rate);
}
inline int enTax(int rate, double yen){
  return yen * (100 + rate) / 100;
}

int main(){
  while(1){
    int x, y, s; cin >> x >> y >> s;
    if(!x && !y && !s) break;

    int maximum = 0;
    for(double i=1.0;i < s/2+1; ++i){
      double j = s-i+0.99999999999999;
      double k = i+0.99999999999999;

      int nx = deTax(x, k), ny = deTax(x, j);
      if(enTax(x, nx) + enTax(x, ny) == s){
        maximum = max(maximum, enTax(y, nx) + enTax(y, ny));
      }
    }
    cout << maximum << endl;
  }
}
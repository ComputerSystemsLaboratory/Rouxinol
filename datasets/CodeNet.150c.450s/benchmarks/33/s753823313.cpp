#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int x, y, s;
  while(true){
    cin >> x >> y >> s;
    if(x == 0)
      break;

    int nmax = 0;
    double c1, c2;
    for(int i=1; i<=s/2; i++){
      c1 = i;
      c2 = s - i;
      c1 = ceil(c1 * 100.0 / (100.0 + x));
      c2 = ceil(c2 * 100.0 / (100.0 + x));
      if((int)(c1 * (100.0 + x) / 100) + (int)(c2 * (100.0 + x) / 100) == s){
        c1 = c1 * (100.0 + y) / 100.0;
        c2 = c2 * (100.0 + y) / 100.0;
        nmax = max(nmax, (int)c1 + (int)c2);
      }
    }

    cout << nmax << endl;
  }
  
  return 0;
}
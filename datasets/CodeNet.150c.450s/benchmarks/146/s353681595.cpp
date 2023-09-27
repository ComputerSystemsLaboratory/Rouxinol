#include <iostream>
#include <cmath>
using namespace std;
  
int main (void) {
  long double x1, y1, x2, y2, x3, y3, x4, y4;
  int n;
     
  cin >> n;
    
  for(int i = 0; i < n; i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long double t1 = (y1-y2)/(x1-x2);
    long double t2 = (y3-y4)/(x3-x4);
    //cout << t1 << " " << t2 << endl;
    if (t1==t2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
    
  return 0;
}
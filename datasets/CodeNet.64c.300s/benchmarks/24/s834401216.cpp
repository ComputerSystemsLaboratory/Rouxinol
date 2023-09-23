#include <iostream>
using namespace std;
 
int main() {
  int n, a, b, pointA, pointB;

  cin >> n;
  while(n != 0) {
    

    pointA = 0;
    pointB = 0;

    for(int i = 0; i < n; i++) {
      cin >> a >> b;
 
      if(a > b) {
        pointA += (a + b);
      } else if(a < b) {
        pointB += (a + b);
      } else {
        pointA += a;
        pointB += b;
      }
    }

    cout << pointA << ' ' << pointB << endl;
    cin >> n;
  }   
 
  return 0;
}
 
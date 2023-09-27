#include <iostream>
using namespace std;

int main() {
  int n,a,b,pointa,pointb;
  while(cin >> n) {
    if(n == 0) break;
  pointa = 0;
  pointb = 0;
    for(int i=0;i<n;i++) {
      cin >> a >> b;
      if(a > b) {
        pointa += a + b;
      }
      else if(b > a) {
        pointb += a + b;
      }
      else {
        pointa += a;
        pointb += b;
      }
    }
    cout << pointa << " " << pointb << endl;
  }
}
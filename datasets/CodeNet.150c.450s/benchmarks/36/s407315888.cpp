#include <iostream>
using namespace std;

int main() {
  int d,n;
  int S;
  S=0;
  while(cin >> d) {
    n = 600 / d;
    for(int i=1;i<n;i++) {
      S += d * (i * d)*(i * d);
        }
    cout << S << endl;
    S=0;
  }

}
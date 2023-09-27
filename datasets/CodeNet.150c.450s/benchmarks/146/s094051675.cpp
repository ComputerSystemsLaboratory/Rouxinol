#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    float x[4], y[4];
    for (int i = 0; i < 4; i++) {
      cin >> x[i] >> y[i];
    }
    // if((x2-x1)*(y4-y3)==(x4-x3)*(y2-y1))cout<<"YES"<<endl;
    if ((x[1] - x[0]) * (y[3] - y[2]) == (x[3] - x[2]) * (y[1] - y[0])) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
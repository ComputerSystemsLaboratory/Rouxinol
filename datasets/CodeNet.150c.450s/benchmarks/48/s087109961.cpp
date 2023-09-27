#include <iostream>
#include <cmath>
using namespace std;
int calcOver(int, int);
int calcM(int, int ,int);

int main() {
  while(true) {
    int e;
    cin >> e;
    if(e == 0) break;
    int y = 0;
    int z = 0;
    int maxover = 0;
    int limity = pow(e, 1.0 / 2.0) + 1;
    int limitz = pow(e, 1.0 / 3.0) + 1;
    int maxy = limity;
    int maxz = limitz;
    int minm = e;
    bool flag = false;
    //cout << limity << ":" << limitz << endl;
    for(y = limity; y >= 0; --y) {
      for(int z = limitz; z >= 0; --z) {
        int m = calcM(e, y, z);
        //if((y + z <= m) && (m <= y + z + e)) {
        if(e >= calcOver(y, z)) {
          //cout << y << ":" << z << ":" << ":" << m << endl;
          if(minm > m) {
            maxy = y;
            maxz = z;
            minm = m;
          }
        }
      }
    }
    //cout << maxy << ":" << maxz << endl;
    cout << minm << endl;
  }
  return 0;
}

int calcOver(int y, int z) {
  return (y*y + z*z*z);
}
int calcM(int e, int y, int z) {
  return (e - y*y - z*z*z + y + z);
}
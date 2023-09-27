#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int e;
  while ((cin >> e) && e != 0) {
    int m = e;
    for (int z=0,zzz=0; zzz<=e; z++,zzz=z*z*z){
      for (int y=0,yy=0; (yy+zzz)<=e; y++,yy=y*y){
        int x = e - (yy+zzz);
        m = min(m, x+y+z);
      }
    }
    cout << m << endl;
  }
  return 0;
}
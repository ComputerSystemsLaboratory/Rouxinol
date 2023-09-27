#include <iostream>
using namespace std;

int e, m;

int main(void){
  while(cin >> e && e != 0){
    m = 1000000;
    for(int y = 0; y <= 1000; y++){
      for(int z = 0; z <= 100; z++){
        int x = e - y * y - z * z * z;
        if(x < 0) continue;
        if(x + y + z < m) m = x + y + z;
      }
    }
    cout << m << endl;
  }
  return 0;
}
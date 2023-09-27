#include <iostream>
using namespace std;

int main()
{
  int e, x;
  while(cin >> e && e > 0){
    int m = 1e6;
    for(int z=0; z<=1e2; z++){
      for(int y=0; y<=1e3; y++){
        x = e - z*z*z - y*y;
        if(x < 0){
          continue;
        }
        if(x+y+z<m){
          m = x + y + z;
        }
      }
    }
    cout << m << endl;
  }
  return 0;
}
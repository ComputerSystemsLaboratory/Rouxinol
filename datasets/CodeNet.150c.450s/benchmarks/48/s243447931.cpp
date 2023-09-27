#include <iostream>
using namespace std;
int main()
{
  for(;;){
    int e;
    cin >> e;
    if(e == 0) break;
    int ret = 1000000;
    for(int z = 0; z*z*z <= e; z++){
      for(int y = 0; z*z*z+y*y <= e; y++){
        int x = e - z*z*z - y*y;
        if(x+y+z < ret){
          ret = x+y+z;
        }
      }
    }
    cout << ret << endl;
  }
  return 0;
}
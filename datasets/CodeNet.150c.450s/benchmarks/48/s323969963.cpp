#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int e;
  int x = 0;
  int y = 0;
  int z = 0;
  while(cin >> e && e > 0){
    int min = e;
    int zmax = ceil(pow(e, 1.0/3.0));
    int ymax = ceil(pow(e, 1.0/2.0));
    for(int i=0; i<=zmax; i++){
      for(int j=0; j<=ymax; j++){
        int y2 = j * j;
        int z3 = i * i * i;
        x = e - y2 - z3;
        if(x >= 0 && min > x + i + j){
          min = x + i + j;
        }
      }
    }
    cout << min << endl;
  }

  return 0;
}
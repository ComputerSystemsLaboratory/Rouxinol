#include <iostream>
#include <math.h>
using namespace std;

int e;

int solve(){
  int min = 100000000;
  for(int z = 0; z * z * z <= e;z++){
    int y = floor(sqrt(e - z * z * z));
    int x = e - z * z * z - y * y;
    if(z + y + x < min){
      min = x + y + z;
    }
  }
  return min;
}

int main() {
  while(cin >> e && e > 0){
    cout << solve() << endl;
  }
}


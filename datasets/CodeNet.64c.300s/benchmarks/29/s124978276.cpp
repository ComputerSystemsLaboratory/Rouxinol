#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define INF 1e9

int main(){
  int e;
  while(true){
    cin >> e;
    if(e == 0)
      break;

    int y, sum, nmin = INF;
    for(int i=0; i*i*i<=e; i++){
      sum = e - i*i*i;
      y = sqrt(sum);
      sum -= y*y;
      nmin = min(nmin, sum + y + i);
    }
    cout << nmin << endl;
  }
  
  return 0;
}
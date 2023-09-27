                                      
#include <iostream>
#include <cmath>
using namespace std;
int main(){


  int dataSets;
  cin >> dataSets;
  for(int i=0;i<dataSets;i++){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if(abs((y2-y1)*(x4-x3) - (x2-x1)*(y4-y3)) < 0.0000000001){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

  }

  return 0;
}
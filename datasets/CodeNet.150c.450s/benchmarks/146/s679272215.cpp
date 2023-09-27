#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;++i){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double vx = x2-x1 , vy = y2-y1;
    double ux = x4-x3 , uy = y4-y3;
    if(abs(vx*uy-ux*vy)<1.e-10){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}
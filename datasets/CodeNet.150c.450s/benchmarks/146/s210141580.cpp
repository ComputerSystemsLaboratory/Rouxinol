#include <iostream>
#include <cmath>
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
using namespace std;

int main (int argc, char const* argv[]){
  int n;
  double x1,x2,x3,x4,y1,y2,y3,y4;
  
  
  cin >> n;
  //座標取得
  while(cin >> x1 >>y1 >>x2 >>y2 >>x3 >>y3 >>x4 >>y4){
    double ax=x2-x1, ay=y2-y1, bx=x4-x3,by=y4-y3;
    double det = ax*by - ay*bx;
    if(EQ(det,0.0)) cout << "YES" <<endl;
    else cout << "NO" << endl;
    
  }
  
  
  
  
  return 0;
}
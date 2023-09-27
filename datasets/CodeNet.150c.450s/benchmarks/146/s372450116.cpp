#include<iostream>
#include<cmath>
using namespace std;
#define EPS 1e-10
double x[4],y[4];
double det(){
  double x1,x2,y1,y2;
  x1 = x[0] - x[1];
  y1 = y[0] - y[1];
  x2 = x[2] - x[3];
  y2 = y[2] - y[3];
  return x1 * y2 - y1 * x2;
}

int main(void){
  int n;
  cin >> n;
  while(n--){
    for(int i = 0 ; i < 4 ; i ++)cin>>x[i]>>y[i];
    cout<<(fabs(det())<EPS?"YES":"NO")<<endl;

  }
  return 0;
}
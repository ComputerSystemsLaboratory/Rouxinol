#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int a,b,c,d,e,f;
  double x,y;
  while(cin>>a>>b>>c>>d>>e>>f){
    y = (double)(a*f-d*c) / (a*e - b*d);
    x = (c-b*y) / a;
    cout << setprecision(3) << setiosflags(ios::fixed) << x << ' ' << setprecision(3) << setiosflags(ios::fixed) << y << endl;
  }
  return 0;
}
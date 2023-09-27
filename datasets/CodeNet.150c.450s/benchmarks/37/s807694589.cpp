#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double a,b,c,d,e,f,x,y;
  while(cin >> a >> b >> c >> d >> e >> f){
	double x = (c*e - b*f) / (a*e - b*d);
	double y = (c - a*x) / b;
	if(x == -0) x = 0;
	if(y == -0) y = 0;
	cout << fixed << setprecision(3) << x << " " << y << endl;
  } 
  return 0;
}
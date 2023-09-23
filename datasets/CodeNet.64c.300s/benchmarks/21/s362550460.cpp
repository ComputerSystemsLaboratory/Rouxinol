#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
  int a, b, c, d, e, f;
  while(true){
	if(!(cin >> a >> b >> c >> d >> e >> f)) return 0;
	double det = a*e - b*d;
	double x = (e*c-b*f)/det;
	double y = (-d*c+a*f)/det;
	printf("%.3f %.3f\n", (int)(x*1000)/1000.0, (int)(y*1000)/1000.0 );
  }
}
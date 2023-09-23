#include <iostream>
#include <cstdio>
using namespace std;

#define EPS 1.0e-6

int main(){
	int a, b, c, d, e, f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double x = 1.0*(e*c-b*f)/(e*a-b*d);
		double y = 1.0*(d*c-a*f)/(d*b-a*e);
		x += EPS;
		y += EPS;
		printf("%.3f %.3f", x, y);
		cout<<endl;
	}
	return 0;
}
#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
int main(){
	 int a, b, c, d, e, f;
	while(cin >>a>>b>>c>>d>>e>>f){
		double x = (double) (e*c-b*f)/(a*e-b*d);
		double y = (double) (-d*c+a*f)/(a*e-b*d);
		if(x==0) x=0;
		if(y==0) y=0;
		printf("%.3f %.3f\n", x, y);
	}
		

    return 0;
}
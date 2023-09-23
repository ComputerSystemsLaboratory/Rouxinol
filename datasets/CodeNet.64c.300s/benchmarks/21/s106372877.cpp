#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,e,f,X,Y;
	double x,y;
	while(cin >> a >> b >> c >> d >> e >> f){
		x=(double)(c*(a*e-b*d)-b*(a*f-c*d))/(double)(a*(a*e-b*d));
		y=(double)(a*f-c*d)/(double)(a*e-b*d);
		x*=10000;y*=10000;
		X=x;Y=y;
		if(X%10>=5){
			X+=10;
		}
		X/=10;
		X*=10;
		if(Y%10>=5){
			Y+=10;
		}
		Y/=10;
		Y*=10;
		x=X;y=Y;
		x/=10000;
		y/=10000;
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}

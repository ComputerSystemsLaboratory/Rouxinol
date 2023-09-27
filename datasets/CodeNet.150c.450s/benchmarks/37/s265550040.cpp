#include<iostream>
using namespace std;

int main(){
	double a[6];
	double x,y;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]){
		double b=a[0]*a[4]-a[1]*a[3];
		double c=a[0];
		a[0]=a[4];
		a[4]=c;
		a[1]*=-1.0;
		a[3]*=-1.0;
		x=(a[0]*a[2]+a[1]*a[5])/b;
		y=(a[3]*a[2]+a[4]*a[5])/b;
		if(x==-0.0)x=0.0;
		if(y==-0.0)y=0.0;
		printf("%.3f %.3f\n",x,y);
	}
	


	return 0;
}
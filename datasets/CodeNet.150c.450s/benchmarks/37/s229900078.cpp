#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double anx=0,any=0;
		if((c*e-f*b)!=0 && (a*e-d*b)!=0){
			anx=(c*e-f*b)/(a*e-d*b);
		}
		if((c*d-f*a)!=0 && (b*d-e*a)!=0){
			any=(c*d-f*a)/(b*d-e*a);
		}
		printf("%.3f ",anx);
		printf("%.3f\n",any);
	}
	return 0;
}
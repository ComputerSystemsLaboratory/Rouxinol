#include <iostream>
#include <stdio.h>
#define EE 0.0000001

using namespace std;
  
int main(void){
    double a,b,c,d,e,f,delta,kai,kait;
    while(1){
	    if( scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&e,&c,&d,&f) == EOF) break;
		delta=a*d-b*c;
		kai=(d*e-b*f)/(delta);
		kait=(a*f-e*c)/(delta);
		if((kai >= 0-EE) && (kai <= 0+EE)) kai = 0.0;
		printf("%.3f %.3f\n",kai,kait);
    }
    return 0;
}
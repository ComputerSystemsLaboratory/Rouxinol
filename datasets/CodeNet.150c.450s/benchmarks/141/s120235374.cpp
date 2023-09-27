#include<cstdio>
#include<cmath>
 
//#include<iostream>
using namespace std;
 
int main(){
    float  x1, y1, x2, y2, x3, y3, xp, yp;
	float  x12, y12, x23, y23, x31, y31, x1p, y1p, x2p, y2p, x3p, y3p;

	while( ~scanf("%f%f%f%f%f%f%f%f" , &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)){
		x12=x2-x1; y12=y2-y1;
		x23=x3-x2; y23=y3-y2;
		x31=x1-x3; y31=y1-y3;
		x1p=xp-x1; y1p=yp-y1;
		x2p=xp-x2; y2p=yp-y2;
		x3p=xp-x3; y3p=yp-y3;

		if((x12*y1p-y12*x1p>0 && x23*y2p-y23*x2p>0 && x31*y3p-y31*x3p>0) ||
			(x12*y1p-y12*x1p<0 && x23*y2p-y23*x2p<0 && x31*y3p-y31*x3p<0))
					 printf("YES\n");
		else		printf("NO\n");
	}

    return 0;
}
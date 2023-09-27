#include<stdio.h>
int main(){
	double a,b,c,d,e,f;
	double A,B,C,D,E,F;
	double x,y;
	
	while(scanf("%lf%lf%lf%lf%lf%lf",&a ,&b ,&c ,&d ,&e ,&f )!=EOF){
		A=a*d;
		B=b*d;
		C=c*d;
		D=a*d;
		E=a*e;
		F=a*f;
//		printf(" %lfx + %lfy = %lf\n",A,B,C);
//		printf(" %lfx + %lfy = %lf\n",D,E,F);
		if(B==E){y=0;}
		else{y=(C-F)/(B-E);}
		if(y==-0.000){y=0;}
		x=(c-b*y)/a;
		printf("%1.3lf %1.3lf\n",x,y);
	}
	return 0;
}
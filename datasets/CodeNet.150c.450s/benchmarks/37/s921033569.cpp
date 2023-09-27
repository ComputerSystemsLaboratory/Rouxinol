#include <iostream>
#include <cmath>

int main(void)
{
	int n;
	double a,b,c,d,e,f;
	double det, ia, ib, ic, id;
	double x,y;
	char buf[32];
	while(fgets(buf,32,stdin)!=NULL){
		n=sscanf(buf,"%lf %lf %lf %lf %lf %lf",&a,&b,&e,&c,&d,&f);
		if(n!=6)break;
		det = 1./(a*d - b*c);
		ia=d*det;
		ib=-b*det;
		ic=-c*det;
		id=a*det;
		x=ia*e+ib*f;
		y=ic*e+id*f;
		printf("%.3f %.3f\n", round(x*1000)/1000,round(y*1000)/1000);
	}
	return 0;
}
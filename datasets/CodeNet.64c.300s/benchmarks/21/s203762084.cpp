#include<stdio.h>

int main(){
	double a,b,c,d,e,f,x,y,x2,y2;
	double aa=1000,bb=1000;
	int status;
	while(1){
		status=scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		if (status==EOF){
			break;
		}
		x=(f/e-c/b)/(d/e-a/b);
		y=c/b-a*x/b;
		x2=(b*f-c*e)/(b*d-a*e);
		y2=(c-a*x2)/b;
		
		if (b==0){
			y2=(f-d*x2)/b;
		}
		
		
		
		if (x2<0.0005 && x2>-0.0005){
			x2=0;
		}
		if (y2<0.0005 && y2>-0.0005){
			y2=0;
		}
	//	printf("%.3f %.3f\n",x,y);
	//	printf("%f %f\n",x,y);
		printf("%.3f %.3f\n",x2,y2);
	//	printf("%f %f\n\n\n",x2,y2);
	}
	
	return 0;
}
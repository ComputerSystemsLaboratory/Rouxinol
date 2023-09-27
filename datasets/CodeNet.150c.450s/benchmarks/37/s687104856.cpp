#include <cstdio>

int main(){
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		x = (double)(e*c-b*f)/(e*a-b*d);
		y = (double) (c-a*x)/b;
		if(0.00049>x && x> -0.00049) x=0;
		if(0.00049>y && y> -0.00049) y=0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}
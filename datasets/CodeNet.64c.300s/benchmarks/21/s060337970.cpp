#include <stdio.h>
int main(void)
{
  float a,b,c,d,e,f,x,y;
  while(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f) != EOF){
  	x=(c*e-b*f)/(a*e-b*d);
  	y=(c*d-a*f)/(b*d-a*e);
	if(x>=0){
		x+=0.0004;
	}
	else{
		x-=0.0004;
	}
	if(y>=0){
		y+=0.0004;
	}
	else{
		y-=0.0004;
	}
	printf("%.3f %.3f\n",x,y);
  }
  return(0);
}
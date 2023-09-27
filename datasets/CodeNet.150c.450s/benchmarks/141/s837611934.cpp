#include <stdio.h>
int main(){
	float d,e,f,g,h,i,m,n,x;
	for(;~scanf("%f%f%f%f%f%f%f%f",&d,&e,&f,&g,&h,&i,&m,&n);){
		x=(h-f)*(n-g)-(m-f)*(i-g);
		bool ret=x*(f-d)*(n-e)>x*(m-d)*(g-e)&&x*(d-h)*(n-i)>x*(m-h)*(e-i);
		puts(ret?"YES":"NO");
	}
}
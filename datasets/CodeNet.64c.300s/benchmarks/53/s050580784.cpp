#include <stdio.h>
#include <math.h>
int main(){
	int i,a,b,c,e;
	double d;
	e=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=c;i++){
	d = (double)c/i;
	if((ceil(d)==floor(d))&&(a<=d)&&(d<=b)){
		e=e+1;
	}
	}
	
	printf("%d\n",e );
	return 0;
}
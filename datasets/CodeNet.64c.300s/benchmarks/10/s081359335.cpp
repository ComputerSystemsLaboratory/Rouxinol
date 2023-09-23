#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int a,b,c;
	while(1){
		scanf("%d %d",&a,&b);
		if(a+b==0) break;
		if(a>b){
			c=b;
			b=a;
			a=c;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}
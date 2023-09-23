#include <stdio.h>

int main(void) {
	int a,b,c,n=0,i;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=1&&a<=10000&&b>=1&&b<=10000&&c>=1&&c<=10000){
		if(a<=b){
			for(i=a;i<=b;i++){
				if(c%i==0) n++;
			}
		}
	}
	printf("%d\n",n);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>


int main(void){
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d %d",&a,&b,&c);
		a=a*a;
		b=b*b;
		c=c*c;
		if(a==b+c || b==a+c || c==a+b){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
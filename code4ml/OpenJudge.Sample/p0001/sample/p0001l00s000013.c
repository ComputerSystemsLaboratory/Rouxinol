#include<stdio.h>
int main(){
	int a,b,n,m;
	for(;;){
		if(scanf("%d",&a)==EOF){break;}
		scanf("%d",&b);
		n=a+b;
		m=1;
		while(n>=10){
			n=n/10;
			m++;
		}
		printf("%d\n",m);
	}
	return 0;
}
#include <cstdio>

int main() {
	
	while(1){
		int num,n=0,i=0,a=0,b=0;
		scanf("%d",&num);
		if(num==0) break;
		n=1000-num;

	if (n>=500) {
		i++;
		n=(n-500);
	}
	if (n>=100){
		a=n/100;
		i=a+i;
		n=n%100;
	}
	if (n>=50){
		i++;
		n=(n-50);
	}
	if (n>=10){
		b=n/10;
		i=b+i;
		n=n%10;
	}
	if (n>=5){
		i++;
		n=(n-5);
	}
		i=(i+n);
	printf("%d\n",i);
	}
	
	return 0;
}
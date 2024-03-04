#include <stdio.h>

int main(void) {
	int a,b;
	int n;
	int cnt;
	
	while(scanf("%d %d",&a,&b)==2){
		n=a+b;
		cnt=1;
		
		while(n/10!=0){
			n=n/10;
			cnt++;
		}
		
		printf("%d\n",cnt);
	}
	
	return 0;
}
#include <stdio.h>
int main(){
	int a;
	while(1){
		int n=0;
		scanf("%d",&a);
		if(!a) break;
		a=1000-a;
		while(a>0){
			if(a>=500) a-=500;
			else if(a>=100) a-=100;
			else if(a>=50) a-=50;
			else if(a>=10) a-=10;
			else if(a>=5) a-=5;
			else if(a>=1) a-=1;
			n++;
		}
		printf("%d\n",n);
	}
	return 0;
}
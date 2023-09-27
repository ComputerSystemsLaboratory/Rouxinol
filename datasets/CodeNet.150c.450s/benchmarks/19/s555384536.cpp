#include<stdio.h>
int main(void){

	int x,a;
	for(int i=1;;i++){
	scanf("%d%d",&x,&a);
	if(a==0 && x==0)break;
	else if(x>a){
		int n=x;
			x=a;
			a=n;
	}
	printf("%d %d\n",x,a);
	}
	return 0;
}
#include<stdio.h>

int main(){
	int a,b,i,n,ap,bp;
	
	for(;;){
		a=b=0;
		scanf("%d",&n);
		if(n==0) break;
		for(;n!=0;n--){
			scanf("%d%d",&ap,&bp);
			if(ap>bp) a+=ap+bp;
			else if(ap<bp) b+=ap+bp;
			else{
				a+=ap;b+=bp;
			}
		}
		printf("%d %d\n",a,b);
	}
}
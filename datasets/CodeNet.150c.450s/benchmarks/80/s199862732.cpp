#include <stdio.h>
int main(){
	int a,b,t;
	a=b=0;
	for(int i=0;i<4;i++){
		scanf("%d",&t);
		a+=t;
	}
	for(int i=0;i<4;i++){
		scanf("%d",&t);
		b+=t;
	}
	if(a>b) printf("%d\n",a);
	else printf("%d\n",b);
	return 0;
}
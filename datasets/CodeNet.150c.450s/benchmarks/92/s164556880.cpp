#include <stdio.h>

int main(void){
	int a,b;
	int i;
	while(scanf("%d%d",&a,&b)!=EOF){
		a+=b;
		for(i=1; (a/=10); i++);
		printf("%d\n",i);
	}
	return 0;
}
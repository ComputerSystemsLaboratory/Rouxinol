#include <stdio.h>
#include <string.h>

int main(){
	int a,b,c,i;
	while(scanf("%d %d",&a,&b)!=EOF){
	i=1;
	c=a+b;
	while(c=c/10){
		i++;
	}
		
	printf("%d\n",i);
	}
	return 0;
}
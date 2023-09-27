#include<stdio.h>
int main(void)
{
	int a,b=0,c=0,i;
	for(i=0;i<4;i++){
		scanf("%d",&a);
		b+=a;
	}
	for(i=4;i<8;i++){
		scanf("%d",&a);
		c+=a;
	}
	if(b<c){
		printf("%d\n",c);
	}
	else{
		printf("%d\n",b);
	}
	return 0;
}
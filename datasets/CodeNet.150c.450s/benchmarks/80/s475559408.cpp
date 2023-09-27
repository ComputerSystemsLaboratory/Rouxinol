#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,h,j,k;
	scanf("%d %d %d %d",&a,&s,&d,&f);
	scanf("%d %d %d %d",&g,&h,&j,&k);
	if(a+s+d+f>=g+h+j+k){
		printf("%d\n",a+s+d+f);
	}
	else{
		printf("%d\n",g+h+j+k);
	}
	return 0;
}
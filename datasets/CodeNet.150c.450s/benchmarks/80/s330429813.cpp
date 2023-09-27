#include<stdio.h>
int main(void)
{
	int a1,a2,a3,a4,s;
	int b1,b2,b3,b4,z;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	s=a1+a2+a3+a4;
	scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
	z=b1+b2+b3+b4;
	if(s>=z){
		printf("%d\n",s);
	}
	else if(z>s){
		printf("%d\n",z);
	}
	return 0;
}
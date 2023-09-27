#include<stdio.h>
int main(void)
{
	int a1,a2,a3,a4,b1,b2,b3,b4,s,s1;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
	s=a1+a2+a3+a4;
	s1=b1+b2+b3+b4;
	if(s>=s1){
		printf("%d\n",s);
	}
	else if(s<s1){
		printf("%d\n",s1);
	}

	return 0;
}
	
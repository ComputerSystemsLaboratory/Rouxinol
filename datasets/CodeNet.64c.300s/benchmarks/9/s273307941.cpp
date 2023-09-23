#include<stdio.h>
int main(void)
{
	int n,i,s,z;
	z=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=(z*5)/100;
		if(s%1000!=0){
			s=s/1000;
			s++;
			s=s*1000;
		}
		z=z+s;
	//	printf("%d\n",s);
	}
	printf("%d\n",z);
	return 0;
}
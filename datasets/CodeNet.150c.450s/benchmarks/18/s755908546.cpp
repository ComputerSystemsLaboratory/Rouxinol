#include<stdio.h>
int main(void)
{
	int n,s,ss,i;
	scanf("%d",&n);
	s=100000;
	for(i=0;i<n;i++){
		ss=s*0.05;
		s+=ss;
		if(s%1000!=0){	
		s=s/1000;
		s=(s+1)*1000;
		}
	}
	
	printf("%d\n",s);
	return 0;
}
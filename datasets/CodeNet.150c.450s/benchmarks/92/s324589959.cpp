#include<stdio.h>
int main(void)
{
	int a,b,cnt,s;
	while(scanf("%d %d",&a,&b)!=EOF){
		cnt=0;
		s=a+b;
		while(s>0){
			s=s/10;
			cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
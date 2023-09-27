#include<stdio.h>
int main (void)
{
	int n;
	int s;
	int cnt;
	
	scanf("%d",&n);
	while(n!=0){
		cnt=0;
		s=1000-n;
		while(s>=500){
			s=s-500;
			cnt++;
		}
		while(s>=100){
			s=s-100;
			cnt++;
		}
		while(s>=50){
			s=s-50;
			cnt++;
		}
		while(s>=10){
			s=s-10;
			cnt++;
		}
		while(s>=5){
			s=s-5;
			cnt++;
		}
		while(s>=1){
			s=s-1;
			cnt++;
		}
		printf("%d\n",cnt);
		scanf("%d",&n);
	}
	return 0;
}
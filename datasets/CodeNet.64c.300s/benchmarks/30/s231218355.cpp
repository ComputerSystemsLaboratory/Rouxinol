#include<stdio.h>
int main(void)
{
	int a,s,d,f;
	scanf("%d",&a);
	while(a!=0){
	d=0;
	s=1000-a;
	while(s!=0){
	if(s>=500){
		s=s-500;
		d++;
	}
	else if(s>=100){
		s=s-100;
		d++;
	}
	else if(s>=50){
		s=s-50;
		d++;
	}
	else if(s>=10){
		s=s-10;
		d++;
	}
	else if(s>=5){
		s=s-5;
		d++;
	}
	else if(s>=1){
		s=s-1;
		d++;
	}
	}
	printf("%d\n",d);
	scanf("%d",&a);
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int s,o,i;
	scanf("%d",&o);
	while(o !=0){
	s=1000-o;
	i=0;
	
		while(s>=500){
			s=s-500;
			i++;
		}
		while(s>=100){	
			s=s-100;
			i++;
		}
		while(s>=50){
			s=s-50;
			i++;
		}
		while(s>=10){
			s=s-10;
			i++;
		}
		while(s>=5){
			s=s-5;
			i++;
		}
		while(s>=1) {
			s=s-1;
			i++;
		}
	printf("%d\n",i);
	scanf("%d",&o);
	}			
	return 0;
}
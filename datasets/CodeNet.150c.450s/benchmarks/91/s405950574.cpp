#include<stdio.h>
int a[1000000];
int main(void)
{
	int s,d,f,g,h,i,j;
	a[1]=0;
	for(i=2;i<=999999;i++){
		a[i]=1;
	}
	for(i=2;i*i<=1000000;i++){
		if(a[i]!=0){
			s=2;
			while(i*s<=999999){
				a[i*s]=0;
				s++;
			}
		}
	}
/*	for(i=1;i<=100000;i++){
		if(a[i]==1){
			printf("%d\n",i);
		}
	}*/
	while(scanf("%d",&f)!=EOF){
		g=0;
		for(i=1;i<=f;i++){
		if(a[i]==1){
			g++;
		}
	}
	printf("%d\n",g);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n,r,i,f;
	for(i=0;i<5;i++){
		r=0;
		scanf("%d",&f);
		if(f==0){
			break;
		}
		n=1000-f;
		if(n>=500){
			r++;
			n-=500;
		}
		while(n>=100){
			r++;
			n-=100;
		}
		if(n>=50){
			r++;
			n-=50;
		}
		while(n>=10){
			r++;
			n-=10;
		}
		if(n>=5){
			r++;
			n-=5;
		}
		while(n>0){
			r++;
			n-=1;
		}
		printf("%d\n",r);
	}

	return 0;
}
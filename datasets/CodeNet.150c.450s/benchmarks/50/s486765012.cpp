#include<stdio.h>
int main()
{
	int n,i,coin;
	
	for(;;){
		scanf("%d",&n);
		if(n==0){break;}
		else{
			coin=0;
			n=1000-n;
			for(;n!=0;){
				if	   (n>=500){n-=500;coin++;}
				else if(n>=100){n-=100;coin++;}
				else if(n>= 50){n-= 50;coin++;}
				else if(n>= 10){n-= 10;coin++;}
				else if(n>=  5){n-=  5;coin++;}
				else if(n>=  1){n-=  1;coin++;}
			}
			printf("%d\n",coin);
		}
	}
	return 0;
}
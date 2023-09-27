#include<stdio.h>
int main(){
	int M,D,Y;
	
	for(;;){
		scanf("%d%d", &M, &D);
		if(M==0 && D==0)break;
		for(;M>1;M--){
			D+=31;
			if(M==12 || M==10 || M==7 || M==5){
				D-=1;
			}
			if(M==3){
				D-=2;
			}
		}
		D%=7;
		switch(D){
			case 0:
				puts("Wednesday");
				break;
			case 1:
				puts("Thursday");
				break;
			case 2:
				puts("Friday");
				break;
			case 3:
				puts("Saturday");
				break;
			case 4:
				puts("Sunday");
				break;
			case 5:
				puts("Monday");
				break;
			case 6:
				puts("Tuesday");
				break;
		}
			
	}
	return 0;
}
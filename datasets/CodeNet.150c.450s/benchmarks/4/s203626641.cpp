#include<stdio.h>
int main(){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1)	break;
		else if(a==-1||b==-1)	printf("F\n");
		else if((a+b)>=80)	printf("A\n");
		else if((a+b)>=65)	printf("B\n");
		else if((a+b)>=50)	printf("C\n");
		else if((a+b)>=30){
			if(c>=50){
				printf("C\n");
			}
			else{
				printf("D\n");
			}
		}
		else{
			printf("F\n");
		}
	}
	return 0;
}
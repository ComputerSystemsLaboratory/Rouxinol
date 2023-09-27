#include<stdio.h>

int main(){
	int m=0,f=0,r=0;
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		if(m==-1&&f==-1&&r==-1){
			break;
		}
		if(m==-1||f==-1){
			printf("F\n");
		}
		else if(m+f>=80){
			printf("A\n");
		}
		else if(m+f>=65){
			printf("B\n");
		}
		else if(m+f>=50){
			printf("C\n");
		}
		else if(m+f>=30){
			if(r>=50){
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
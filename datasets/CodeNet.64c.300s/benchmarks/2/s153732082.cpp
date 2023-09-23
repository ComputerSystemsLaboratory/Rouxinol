#include<stdio.h>

int main(){
	int m,f,r,ten;
	while(1){
	scanf("%d %d %d",&m,&f,&r);
	if(m==-1 && f==-1 && r==-1){
		break;
	}
	ten = m+f;
	if(m == -1 || f == -1){
		printf("F\n");
	}else if(ten >= 80){
		printf("A\n");
	}else if(ten>=65 && ten<80){
		printf("B\n");
	}else if(ten>=50 && ten<65){
		printf("C\n");
	}else if(ten>=30 && ten<50){
		if(r>=50){
			printf("C\n");
		}else{
			printf("D\n");
		}
	}else if(ten<30){
		printf("F\n");
	}
	}
}
		
#include<stdio.h>

int main(void){


	int n,risi,money=100000;
	
	
	
	int i;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		risi = money*(5.0/100.0);

		money+=risi;

		if(money % 1000 != 0){
			money -= money%1000;
			money += 1000;
		}

	}

	printf("%d\n",money);

	return 0;
}
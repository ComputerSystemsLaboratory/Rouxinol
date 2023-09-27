#include<stdio.h>

void y(int x ){
	if(x == 0)
		puts("Thursday");
	else if(x == 1)
		puts("Friday");
	else if(x == 2)
		puts("Saturday");
	else if(x == 3)
		puts("Sunday");
	else if(x == 4)
		puts("Monday");
	else if(x == 5)
		puts("Tuesday");
	else if(x == 6)
		puts("Wednesday");
}

int main(void){
	int M,D;
	while(1){
		int date = 0,ans;
		int m[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
		
		scanf("%d%d", &M, &D);
		if(M == 0 && D  == 0)break;
		for(int i = 1; i <= 12 ; i++){
			for(int j = 1; j <= m[i-1]; j++){
				if(i == M && j == D){
					ans = date;
				}
	//			printf("%d%dú%d\n",i,j,date%7);
	//			y(date%7);
				date++;
			}
		}
		y(ans%7);
	}
	
	return 0;
}
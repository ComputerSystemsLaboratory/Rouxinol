#include <stdio.h>

int main(void) {
	long int a,b;
	long int sum = 0;
	int digits = 0;
	int i;
	
	
	for(i=0; i<200; i++){
		scanf("%ld%ld",&a,&b);
		sum = a + b;
		
		//何も入力されない場合、ループを抜ける
		if(a == -1)
			break;
		
		//桁数をカウントする
		while(sum > 0){
			digits++;
			sum = sum / 10; 
		}
		
		printf("%d\n",digits);
		
		//初期化
		digits = 0;
		
		//入力の終わり判定に使う
		a = -1;
	}
	
	return 0;
}
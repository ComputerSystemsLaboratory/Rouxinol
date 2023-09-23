#include <stdio.h>
#define loop(num)	for(int a = 0; a < num; a++)

int main(){
	int num;
	do{
		long long A = 0, B = 0;
		int a_card, b_card;
		scanf("%d", &num);
		loop(num){
			scanf("%d%d", &a_card, &b_card);
			if (a_card < b_card) B += (a_card + b_card);
			if (b_card < a_card) A += (a_card + b_card);
			if (a_card == b_card){
				A += a_card;
				B += b_card;
			}
		}
		if (num != 0)
		printf("%lld %lld\n", A, B);
	} while (num != 0);
	return 0;
}
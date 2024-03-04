#include<stdlib.h>

int main(void){
	int count, count1, num, num1 = 0, num2 = 0, num3 = 0, i;
	int hill[10] = { '0' }, ans[3] = { '0' };

	for (count = 0; count < 10; count++){
		scanf("%d", &hill[count]);
	}

	for (count = 0; count < 10; count++){
		if (num1 < hill[count]){
			num1 = hill[count];
			num = count;
		}
	}
	hill[num] = 0;

	for (count = 0; count < 10; count++){
		if (num2 < hill[count]){
			num2 = hill[count];
			num = count;
		}
	}
	hill[num] = 0;

	for (count = 0; count < 10; count++){
		if (num3 < hill[count]){
			num3 = hill[count];
			num = count;
		}
	}

	printf("%d\n%d\n%d\n", num1, num2, num3);

	return 0;
}
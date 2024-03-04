#include<stdio.h>

int main(void){
	int i;	//ループ用変数
	int high[10];	//山の高さを収める変数
	int max[3] = { 0, 0, 0 };	//最大値を入れる変数

	for (i = 0; i < 10; i++){
		scanf("%d", &high[i]);
	}

	for (i = 0; i < 10; i++){
		if (max[0] < high[i]) max[0] = high[i];
	}
	for (i = 0; i < 10; i++){
		if (max[1] < high[i] && high[i] != max[0]) max[1] = high[i];
	}
	for(i = 0; i < 10; i++){
		if (max[2] < high[i] && high[i] != max[0] && high[i] != max[1]) max[2] = high[i];
	}

	printf("%d\n%d\n%d\n", max[0], max[1], max[2]);

	return 0;
	
}
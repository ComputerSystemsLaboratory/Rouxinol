#include <math.h>
#include <stdio.h>

int num_data[12345];

int sosu(int num){
	if (num == 2) return true;
	int max = sqrt((float)num);
	if (num % 2 == 0) return false;
	for (int a = 3; a <= max; a += 2){
		if (num % a == 0) return false;
	}
	return true;
}

int main(){
	int numbers = 0;
	int now_num = 0;
	int ans = 0;
	scanf("%d", &numbers);
	for (int a = 0; a < numbers; a++){
		scanf("%d", &now_num);
		if (sosu(now_num) == true) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Count(int num) {
	if (num == 1) return 1;
	else if (num == 2) return 2;
	else if (num == 3) return 4;
	else return Count(num - 1) + Count(num - 2) + Count(num - 3);
}



int main() {
	int num;
	while (1) {
		scanf("%d", &num);
		if (num == 0)break;
		printf("%d\n", (Count(num)/10)/365 + 1);
	}
	return 0;
}

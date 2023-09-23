#include <stdio.h>

int numbers[30];
bool flag = false;
int cou = 0, ans[2];

int main(void) {
	for (int i = 0; i < 28; ++i) { scanf("%d", &numbers[i]); }
	
	for (int i = 1; i <= 30; ++i) {
		for (int j = 0; j < 28; ++j) {
			if (numbers[j] == i) {
				flag = true;
				break;
			}
		}
		if (flag == false) {
			ans[cou] = i;
			cou++;
		}
		flag = false;
	}

	printf("%d\n%d\n", ans[0], ans[1]);
	return 0;
}
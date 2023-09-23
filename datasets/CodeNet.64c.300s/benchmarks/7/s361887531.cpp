#include <stdio.h>

int main() {
	int Cards[4][13], cnt, t_num;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			Cards[i][j] = 1;
		}
	}

	char cha;
	scanf("%d", &cnt);
	
	for (int i = 0; i < cnt; i++) {
		scanf("%c", &cha);
		scanf("%c %d", &cha, &t_num);
		if (cha == 'S') {
			Cards[0][t_num - 1] = 0;
		}
		else if (cha == 'H') {
			Cards[1][t_num - 1] = 0;
		}
		else if (cha == 'C') {
			Cards[2][t_num - 1] = 0;
		}
		else if (cha == 'D') {
			Cards[3][t_num - 1] = 0;
		}
		else{printf("Error root\n");}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (Cards[i][j] == 1) {
				if (i == 0) {
					printf("S %d\n", j + 1);
				}
				else if (i == 1) {
					printf("H %d\n", j + 1);
				}
				else if (i == 2) {
					printf("C %d\n", j + 1);
				}
				else if (i == 3) {
					printf("D %d\n", j + 1);
				}
				else {}
			}
		}
	}

	return 0;
}

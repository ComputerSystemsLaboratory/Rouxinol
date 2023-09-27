#include<stdio.h>

char judg(int, int, int);
int main() {
	char gd[BUFSIZ];

	int mid, lst, ret;

	int num;
	int i;
	for (i = 0; i < BUFSIZ - 1; i++) {

		fflush(stdin);
		scanf("%d %d %d", &mid, &lst, &ret);

		if (ret == -1 && mid == -1 && lst == -1)break;

		gd[i] = judg(mid, lst, ret);
		
	}
	gd[i] = '\0';
	num = i;

	for (i = 0; i < num; i++) {
		printf("%c\n", gd[i]);
	}
	

	return 0;
}
char judg(int m, int l, int r) {
	if (m == -1 || l == -1)return'F';

	int ml = m + l;
	if (ml >= 80)return'A';
	if (ml >= 65)return'B';
	if (ml >= 50)return'C';
	if (ml >= 30) {
		if (r >= 50)return'C';
		return'D';
	}
	return'F';
}
#include <stdio.h>
#include <string.h>

int main(void) {

	short n, scoreT, scoreH;
	char cardT[100], cardH[100];
	int result;

	scanf("%d", &n);
	scoreT = scoreH = 0;

	for (int i = 1; i <= n; i++) {
		scanf("%s %s", cardT, cardH);

		result = strcmp(cardT, cardH);
		if (result > 0) {
			scoreT += 3;
		} else if (result < 0) {
			scoreH += 3;
		} else {
			scoreT += 1;
			scoreH += 1;
		}
	}

	printf("%d %d\n", scoreT, scoreH);
	return 0;
}
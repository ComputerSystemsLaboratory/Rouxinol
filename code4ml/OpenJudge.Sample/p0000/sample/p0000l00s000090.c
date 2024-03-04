#include <stdio.h>

int main () {
	int mountain[10];
	int firstM, secondM, thirdM, i;
	
	for (i = 0;i < 10;i++) {
		scanf ("%d", &mountain[i]);
	}
	firstM = 0;
	secondM = 0;
	thirdM = 0;
	
	for (i = 0;i < 10;i++) {
		if (firstM < mountain[i]) {
			firstM = mountain[i];
		}
	}
	for (i = 0;i < 10;i++) {
		if (firstM == mountain[i]) {
			mountain[i] = 0;
		}
	}
	for (i = 0;i < 10;i++) {
		if (secondM < mountain[i]) {
			secondM = mountain[i];
		}
	}
	for (i = 0;i < 10;i++) {
		if (secondM == mountain[i]) {
			mountain[i] = 0;
		}
	}
	for (i = 0;i < 10;i++) {
		if (thirdM < mountain[i]) {
			thirdM = mountain[i];
		}
	}
	for (i = 0;i < 10;i++) {
		if (thirdM == mountain[i]) {
			mountain[i] = 0;
		}
	}
	printf ("%d\n%d\n%d\n", firstM, secondM, thirdM);
	
	
	
	return 0;
}
#include <stdio.h>

int main(void) {
	int i, j, temp;
	int mountains[10];
	
	for (i=0; i<10; i++) {
		scanf("%d", &mountains[i]);
	}
	
	for (i=0; i<9; i++) {
		for (j=i+1; j<10; j++) {
			if (mountains[i] < mountains[j]) {
				temp = mountains[i];
				mountains[i] = mountains[j];
				mountains[j] = temp;
			}
		}
	}
	
	printf("%d\n%d\n%d\n", mountains[0], mountains[1], mountains[2]);
	
	return 0;
}
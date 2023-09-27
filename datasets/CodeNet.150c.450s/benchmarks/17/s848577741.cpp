#include <stdio.h>

int main(void) {
	int num[5];
	int tmp;
	char buf[256];
	
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	for (int i=0; i<5-1; i++) {
		for (int j=i+1; j<5; j++) {
			if (num[i] < num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	
	printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main () {
	int n;
	int cmp;
	scanf("%d", &n);
	char str[255];
	int ctr[10] = {0};
	
	for (int i = 0 ; i < n ; i++) {
		scanf("%s", &str);
		if (cmp = strcmp(str, "AC") == 0) {
			++ctr[1];
		}
		if (cmp = strcmp(str, "WA") == 0) {
			++ctr[2];
		}
		if (cmp = strcmp(str, "TLE") == 0) {
			++ctr[3];
		}
		if (cmp = strcmp(str, "RE") == 0) {
			++ctr[4];
		}
	}
	printf("AC x %d\n", ctr[1]);
	printf("WA x %d\n", ctr[2]);
	printf("TLE x %d\n", ctr[3]);
	printf("RE x %d\n", ctr[4]);
	return 0;
}
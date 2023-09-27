#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int n;
	char str1[128], str2[128];

	scanf("%d", &n);

	int ten1, ten2;
	ten1 = ten2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s %s", str1, str2);
		int ret = strcmp(str1, str2);
		if ( ret < 0 ) {
			ten2 += 3;
		} else if ( ret > 0 ) {
			ten1 += 3;
		} else {
			ten1 += 1;
			ten2 += 1;
		}
	}

	printf("%d %d\n", ten1, ten2);

	return 0;

}
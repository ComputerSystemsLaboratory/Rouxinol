#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define M_PI 3.141592653589793


int main(void) {

	int i = 0, j, k;

	char str[200];
	char serch[100];

	scanf("%s", str);
	scanf("%s", serch);
	int d = strlen(str);

	for (i = d; i < d * 2; i++) {
		str[i] = str[i - d];
	}
	str[d * 2] = '\0';

	if (strstr(str, serch) == NULL) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}



	return 0;

}
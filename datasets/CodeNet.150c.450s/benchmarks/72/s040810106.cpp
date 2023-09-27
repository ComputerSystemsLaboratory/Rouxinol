#include <stdio.h>
#include <math.h>
#include <string.h>

#define M_PI 3.141592653589793


int main(void) {

	int i, j, k;

	char str[1200];

	scanf("%[^\n]", str);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
	printf("%s\n", str);
	

	return 0;

}
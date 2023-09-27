#include <cstdio>
#include <cstring>

int main(void) {
	char str[21];
	scanf("%s", str);
	for(int i = strlen(str) - 1; i >= 0; i--)
		putchar(str[i]);
	printf("\n");
	return 0;
}
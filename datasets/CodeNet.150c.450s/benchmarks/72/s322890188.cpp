#include <stdio.h>

#include <ctype.h>

int main(void) {
	char c;
	
	do {
		scanf("%c", &c);
		if (isupper(c)) {
			c = c - 'A' + 'a';
		} else if (islower(c)) {
			c = c - 'a' + 'A';
		}
		printf("%c", c);
	} while (c != '\n');
	
	return 0;
}
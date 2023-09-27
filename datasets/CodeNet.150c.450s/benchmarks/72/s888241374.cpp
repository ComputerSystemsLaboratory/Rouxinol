#include <cstdio>
#include <cctype>

using namespace std;

int main(void) {
	char c;
	while (1) {
		scanf("%c", &c);
		if (isalpha(c)) {
			if (islower(c)) {
				c = toupper(c);
			}
			else if (isupper(c)) {
				c = tolower(c);
			}
		}
		printf("%c", c);
		if (c == '\n') break;
	}

	return 0;
}
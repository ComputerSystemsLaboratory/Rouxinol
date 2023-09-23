#include <cstdio>
#include <cctype>
int main() {
	char c;
	while (scanf("%c", &c))
		if (c == '\n') break;
		else printf("%c", isupper(c) ? tolower(c) : toupper(c));
	puts("");
}
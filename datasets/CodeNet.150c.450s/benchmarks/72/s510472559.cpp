#include<cstdio>
#include<cctype>

int main() {
	char ch,a;

	while (1) {
		scanf("%c", &ch);

		if (isalpha(ch)) {
			if (islower(ch))
				printf("%c", toupper(ch));
			else printf("%c", tolower(ch));
		}
		else printf("%c", ch);

		if (ch == '\n')
			break;
	}

	return 0;
}
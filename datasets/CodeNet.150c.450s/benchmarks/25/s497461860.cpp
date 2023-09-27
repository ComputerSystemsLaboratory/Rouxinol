#include <cstdio>
#include <cctype>

int main(void)
{
	int chCounts[26] = {};
	int ch, i;
	while ((ch = getchar()) != EOF) {
		if ('a' <= ch && ch <= 'z') {
			chCounts[ch - 'a']++;
		}
		else if ('A' <= ch && ch <= 'Z') {
			chCounts[ch - 'A']++;
		}
	}
	for (i = 0; i < 26; i++) {
		printf("%c : %d\n", 'a' + i, chCounts[i]);
	}
	return 0;
}
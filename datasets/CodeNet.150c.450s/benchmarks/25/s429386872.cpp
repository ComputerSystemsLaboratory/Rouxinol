#include <stdio.h>
#include <ctype.h>


int main(void) {
	char str;
	static int cnt[26];
	int ptr;

	while (scanf("%c", &str) != EOF) {

		if (isalpha(str)) {
			if (isupper(str)) ptr = str - 'A';
			else ptr = str - 'a';
			cnt[ptr]++;
		}

	}

	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", 'a' + i, cnt[i]);
	}
	
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i,len,index,alpha, count[26];
	static char s[10000];
	for (i = 0; i < 26; i++) {
		count[i] = 0;
	}
	while (NULL != fgets(s, sizeof(s), stdin)) {
		len = strlen(s);
		for (i = 0; i < len; i++) {
			char t = s[i];
			if (isalpha(t)) {
				if (isupper(t)) {
					t = tolower(t);
				}
				index = t - 'a';
				count[index] = count[index] + 1;
			}
		}
	}
	for (i = 0; i < 26; i++) {
		alpha = 'a' + i;
		printf("%c : %d\n", alpha, count[i]);
	}
}
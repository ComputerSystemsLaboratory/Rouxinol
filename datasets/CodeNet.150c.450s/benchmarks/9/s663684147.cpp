#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {


	char word[250];
	char word2[250];
	char *p;
	char *p2;
	char *pTmp;

	int shuffleNum;
	int pos;

	for(;;) {
		scanf("%s", word);
		if (word[0] == '-') {
			break;
		}
		int len = strlen(word);
		scanf("%d", &shuffleNum);
		p = word;
		p2 = word2;
		for (int i = 0; i < shuffleNum; i++) {
			scanf("%d", &pos);
			strncpy(p2, &p[pos], len - pos);
			p2[len - pos] = '\0';
			strncat(p2, p, pos);
			pTmp = p;
			p = p2;
			p2 = pTmp;
		}
		printf("%s\n", p);
	}
	return 0;

}
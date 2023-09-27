#include<stdio.h>
#include<string.h>

int main() {
	char s[200], buf[200];
	int m, h;
	while (1) {
		scanf("%s", s);
		if (!strcmp(s,"-"))break;
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d", &h);
			for (int j = 0; j < h; j++) {
				buf[j] = s[j];
			}
			for (unsigned int j = 0; j < strlen(s) - h; j++) {
				s[j] = s[j+h];
			}
			for (int j = 0; j < h; j++) {
				s[j+strlen(s)-h] = buf[j];
			}
		}
		printf("%s\n", s);
	}
	return 0;
}

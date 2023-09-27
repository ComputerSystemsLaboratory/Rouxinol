#include<cstdio>
#include<cstring>
int main() {
	char s[201];
	int m, h, i, n;
	while (true) {
		scanf("%s", s);
		if (strcmp(s, "-") == 0)break;
		scanf("%d", &m);
		n = 0;
		for (i = 0; i < m; i++) {
			scanf("%d", &h);
			n = (n + h) % strlen(s);
		}
		printf("%s", s + n);
		s[n] = '\0';
		printf("%s\n", s);
	}
	return 0;
}

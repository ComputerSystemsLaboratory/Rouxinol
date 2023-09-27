#include<cstdio>
#include<cstring>
int main() {
	char str[1001], cmd[8], p[1001], tmp;
	int q, i, a, b, j;
	scanf("%s%d", str, &q);
	for (i = 0; i < q; i++) {
		scanf("%s%d%d", cmd, &a, &b);
		if (strcmp(cmd, "print") == 0) {
			for (j = a; j <= b; j++) printf("%c", str[j]);
			printf("\n");
		}
		else if (strcmp(cmd, "reverse") == 0) {
			while (a < b) {
				tmp = str[a];
				str[a] = str[b];
				str[b] = tmp;
				a++;
				b--;
			}
		}
		else if (strcmp(cmd, "replace") == 0) {
			scanf("%s", p);
			for (j = a; j <= b; j++)str[j] = p[j - a];
		}
	}
	return 0;
}

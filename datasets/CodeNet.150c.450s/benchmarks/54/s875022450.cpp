#include<cstdio>
#include<cstring>
int main() {
	int n = 0;
	char w[11], t[1001];
	scanf("%s%s", w, t);
	for (int i = 0; w[i] != '\0'; i++)if (w[i] >= 'A'&&w[i] <= 'Z')w[i] -= 'A' - 'a';
	while (strcmp(t, "END_OF_TEXT") != 0) {
		for (int i = 0; t[i] != '\0'; i++)if (t[i] >= 'A'&&t[i] <= 'Z')t[i] -= 'A' - 'a';
		if (strcmp(t, w) == 0)n++;
		scanf("%s", t);
	}
	printf("%d\n", n);
	return 0;
}

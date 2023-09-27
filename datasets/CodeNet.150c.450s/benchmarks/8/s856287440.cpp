#include<cstdio>
#include<cstring>
int main() {
	int n, a = 0, b = 0, i;
	scanf("%d", &n);
	char t[101], h[101];
	for (i = 0; i < n; i++) {
		scanf("%s%s", t, h);
		if (strcmp(t, h) > 0)a += 3;
		else if (strcmp(t, h) < 0)b += 3;
		else { a++; b++; }
	}
	printf("%d %d\n", a, b);
	return 0;
}

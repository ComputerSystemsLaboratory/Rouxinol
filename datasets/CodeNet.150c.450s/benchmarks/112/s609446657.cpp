#include <cstdio>
#include <cstring>
int n, m; char e[261], f, g;
int main() {
	while(scanf("%d\n", &n), n) {
		for(int i = 0; i < 256; i++) e[i] = i;
		for(int i = 0; i < n; i++) scanf("%c %c\n", &f, &g), e[f] = g;
		scanf("%d\n", &m);
		for(int i = 0; i < m; i++) scanf("%c\n", &f), printf("%c", e[f]);
		printf("\n");
	}
}
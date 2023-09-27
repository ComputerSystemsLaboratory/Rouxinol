#include <cstdio>

int main(){
	int n, m;
	static int dict[256];
	char k, v, x;
	while (scanf("%d\n", &n)){
		if (!n) return 0;
		for (int i = 0; i<256; i++) dict[i] = i;
		for (int i = 0; i<n; i++){
			scanf("%c %c\n", &k, &v);
			dict[(int)k] = (int)v;
		}
		scanf("%d\n", &m);
		for (int i = 0; i<m; i++){
			scanf("%c\n", &x);
			printf("%c", dict[(int)x]);
		}
		printf("\n");
	}
}
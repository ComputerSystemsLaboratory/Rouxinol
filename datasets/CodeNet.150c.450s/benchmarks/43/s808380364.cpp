#include <cstdio>

int main(void) {
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 0)
			break;
		int scorea = 0, scoreb = 0;
		for(int i = 0; i < n; i++) {
			int a, b;
			scanf("%d %d", &a, &b);
			if (a > b)
				scorea += a + b;
			else if (a < b)
				scoreb += a + b;
			else {
				scorea += a;
				scoreb += b;
			}
		}
		printf("%d %d\n", scorea, scoreb);
	}
	return 0;
}
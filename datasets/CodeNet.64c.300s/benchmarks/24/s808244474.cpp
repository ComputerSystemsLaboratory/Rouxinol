#include <cstdio>

int main() {
	int n;
	int a;
	int b;
	int na, nb;
	while(1) {
		scanf("%d", &n);
		a = 0;
		b = 0;
		if(n == 0)
		break;
		for(int i = 0; i < n; i++) {
			na = 0;nb = 0;
			scanf("%d %d", &na, &nb);
			if(na > nb) {
				a += na + nb;
			} else if(na < nb) {
				b += na + nb;
			} else {
				a += na;
				b += nb;
			}
		}
		printf("%d %d\n", a, b);
	}
	return 0;
}
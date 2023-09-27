#include <cstdio>

int main(void) {
	int souko[10], now=0;
	int input;

	while(scanf("%d", &input) != EOF) {
		if(input == 0) {
			now--;
			printf("%d\n", souko[now]);
		} else {
			souko[now] = input;
			now++;
		}
	}

	return 0;
}
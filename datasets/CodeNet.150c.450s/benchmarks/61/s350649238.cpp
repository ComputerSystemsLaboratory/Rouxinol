#include <cstdio>

#define NUM 128
#define STOP 10000

int main(void) {
	while(1) {
		int n, a, b, c, x, y[NUM], frame, num = 0;
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &x);
		if(!n) break;
		for(int i = 0; i < n; i++) {
			scanf("%d", &y[i]);
		}
		for(frame = 0; frame <= STOP; frame++) {
			if(y[num] == x) num++;
			x = (a * x + b) % c;
			if(num == n) break;
		}
		if(frame > STOP) frame = -1;
		printf("%d\n", frame);
	}
	return 0;
}
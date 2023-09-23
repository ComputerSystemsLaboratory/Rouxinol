// aoj-5000.cpp

#include <cstdio>

int main() {
	int i;
	int cards, a, b, scoreA = 0, scoreB = 0;

	while (1) {
		// read number of cards
		scanf("%d", &cards);
		if (cards == 0) break;
		scoreA = 0;
		scoreB = 0;
	
		for (i=0; i<cards; ++i) {
			scanf("%d %d", &a, &b);
			if (a > b) {
				scoreA += (a + b);
			} else if (b > a) {
				scoreB += (a + b);
			} else {
				scoreA += a;
				scoreB += b;
			}
		}
		printf("%d %d\n", scoreA, scoreB);
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void shuffle(char card[], int h) {
	for (int i = 0; i < h; i++) {
		char tmp = card[0];
		for (int j = 1; j < strlen(card); j++) {
			card[j-1] = card[j];
		}
		card[strlen(card)-1] = tmp;
	}
}

int main() {
	while (1) {
		char card[201];
		scanf("%s", card);
		if (strcmp(card, "-") == 0) {
			break;
		}

		int m;
		scanf("%d", &m);

		for (int i = 0; i < m; i++) {
			int h;
			scanf("%d", &h);
			shuffle(card, h);
		}

		printf("%s\n", card);
	}

	return 0;
}
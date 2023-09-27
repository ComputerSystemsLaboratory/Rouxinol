#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#define MAX_CARD 51
using namespace std;

int main(void) {
	int n, r;
	for (;;) {
		cin >> n >> r;
		if (n == 0 && r == 0) {
			break;
		}
		vector<int> card;
		for (int i = n; i > 0; i--) {
			card.push_back(i);
		}

		for (int i = 0; i < r; i++) {
			int p, c;
			cin >> p >> c;
			vector<int> buf;
			for (int i = p - 1; i < p + c - 1; i++) {
				buf.push_back(card[i]);
				// printf("%d\n", card[i]);
			}

			for (int i = 0, j = buf.size(); i < p - 1; i++, j++) {
				buf.push_back(card[i]);
				// printf("%d\n", card[i]);
			}

			for (int i = p + c - 1, j = buf.size(); i < card.size(); i++, j++) {
				buf.push_back(card[i]);
				// printf("%d\n", card[i]);
			}

			for (int i = 0; i < card.size(); i++) {
				card[i] = buf[i];
				//printf("%d\n", card[i]);
			}
			//printf("\n");

			// shuffle(card, p, c);
		}
		printf("%d\n", card[0]);
	}
	return 0;
}
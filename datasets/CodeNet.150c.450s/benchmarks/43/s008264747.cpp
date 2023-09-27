#include <iostream>

using namespace std;

int main() {
	int n, cards[2][10000], score[2];
	while (cin >> n, n) {
		for (int i = 0; i < n; ++i)
			cin >> cards[0][i] >> cards[1][i];
		
		score[0] = 0, score[1] = 0;
		for (int i = 0; i < n; ++i)
			if (cards[0][i] > cards[1][i]) score[0] += cards[0][i] + cards[1][i];
			else if (cards[0][i] < cards[1][i]) score[1] += cards[0][i] + cards[1][i];
			else score[0] += cards[0][i], score[1] += cards[1][i];

		cout << score[0] << " " << score[1] << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int n, r;
		int cards[50];

		cin >> n >> r;

		if (n == 0 && r == 0) {
			break;
		}

		for (int i = 0; i < 50; i++) {
			int temp = max(0, n - i);
			cards[i] = temp;
		}

		for (int i = 0; i < r; i++) {
			int p, c;

			cin >> p >> c;

			vector<int> shuffle;

			for (int j = 0; j < c; j++) {
				shuffle.push_back(cards[p - 1 + j]);
			}

			for (int j = p - 2; j >= 0; j--) {
				cards[c + j] = cards[j];
			}
			
			for (int j = 0; j < c; j++) {
				cards[j] = shuffle[j];
			}
		}

		cout << cards[0] << endl;
	}

	return 0;
}
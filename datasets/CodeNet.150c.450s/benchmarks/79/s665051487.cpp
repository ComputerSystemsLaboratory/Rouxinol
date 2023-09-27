#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, r;
	while (cin >> n >> r, n + r != 0) {
		vector<int> cards(n);
		for (int i = 0; i < n; i++) {
			cards[i] = i + 1;
		}
		for (int i = 0; i < r; i++) {
			int p, c;
			cin >> p >> c;
			for (int j = 0; j < c; j++) {
				cards.push_back(cards[n - (p - 1 + c)]);
				cards.erase(cards.end() - (p + c));
			}
		}
		cout << cards[n - 1] << endl;
	}

	return 0;
}
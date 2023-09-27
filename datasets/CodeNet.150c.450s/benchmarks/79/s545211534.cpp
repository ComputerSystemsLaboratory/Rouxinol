#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, r, p, c;
	while (true) {
		cin >> n >> r;

		if (n == 0 && r == 0) {
			break;
		}

		vector<int> cards;
		for (int i = 1; i <= n; i++) {
			cards.push_back(i);
		}

		for (int i = 0; i < r; i++) {
			cin >> p >> c;

			p = n - p - c + 1;
			for (int j = 0; j < c; j++) {
				cards.push_back(cards[p]);
				cards.erase(cards.begin() + p);
			}
		}

		cout << cards.back() << '\n';
	}

	return 0;
}
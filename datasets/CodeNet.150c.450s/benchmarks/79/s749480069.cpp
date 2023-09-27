#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, r, p, c, i, ans;
	
	while (cin >> n  && cin >> r) {
		int Deck[51];

		if (n == 0 && r == 0) {
			break;
		}

		for (i = 0; i < n; i++) {
			Deck[i] = n-i;
		}

		for (i = 0; i < r; i++) {
			cin >> p; cin >> c;

			rotate(Deck, Deck + p - 1, Deck + p + c - 1);
		}

		cout << Deck[0] << endl;
	}
}
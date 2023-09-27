#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, r, p, c;
	while (cin >> n >> r , n != 0 || r != 0) {
		vector<int> deck = vector<int>(n);
		for (int i = 0; i < n; i++) {
			deck[i] = n - i;
		}

		for (int j = 0; j < r; j++) {
			cin >> p >> c;
			vector<int> tmp = vector<int>(c);
			for (int k = 0; k < c; k++) {
				tmp[k] = deck[p - 1 + k];
			}
			for (int k = 0; k < p - 1; k++) {
				deck[p + c - 2 - k] = deck[p - 2 - k];
			}
			for (int k = 0; k < c; k++) {
				deck[k] = tmp[k];
			}
		}
		cout << deck[0] << endl;
	}


}
#include <iostream>
#include <vector>

using namespace std;

vector<int> card;
void shuffle(int p, int c) {
	vector<int> buf(c);

	--p;
	for (int i = 0; i < c; ++i) {
		buf[i] = card[p+i];
	}
	for (int i = p-1; i >= 0; --i) {
		card[c+i] = card[i];
	}
	for (int i = 0; i < c; ++i) {
		card[i] = buf[i];
	}
}
void print() {
	for (int i = 0; i < card.size(); ++i) {
		cout << card[i] << " ";
	}
	cout << endl;
}

int main() {
	int n, r;
	while ( cin >> n >> r, n || r ) {
		card.clear();
		card.resize(n);
		for (int i = 0; i < n; ++i) {
			card[i] = i;
		}
		for (int i = 0; i < r; ++i) {
			int p, c; cin >> p >> c;
			shuffle(p, c);
		}
		cout << n-card[0] << endl;
	}
}
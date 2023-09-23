#include <iostream>
using namespace std;

int main() {
	bool cards[4][14];
	int n, rank;
	char suit;

	//二次元配列の初期化
	for (int s = 0; s < 4; s++) {
		for (int r = 1; r <= 13; r++) {
			cards[s][r] = 0;
		}
	}
	
	//入力ゾーン
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> suit >> rank;
		if (suit == 'S') cards[0][rank] = 1;
		if (suit == 'H') cards[1][rank] = 1;
		if (suit == 'C') cards[2][rank] = 1;
		if (suit == 'D') cards[3][rank] = 1;
	}

	//足りないカードを出力
	for (int s = 0; s < 4; s++) {
		for (int r = 1; r <= 13; r++) {
			if (cards[s][r]) continue;
			if (s == 0) suit = 'S';
			if (s == 1) suit = 'H';
			if (s == 2) suit = 'C';
			if (s == 3) suit = 'D';
			cout << suit << " " << r <<endl;
		}
	}

	return 0;
}

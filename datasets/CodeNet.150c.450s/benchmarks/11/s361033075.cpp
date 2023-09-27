#include<iostream>

using namespace std;

// カードの有無はbool配列に記録する。
// 入力でカードを確認したら配列の対応する箇所にtrueを代入。
// 最終的にfalseの箇所が足りないカードを示す。

int main() {
	int n;
	cin >> n;

	// インデックス0が無駄になるが、
	// 配列アクセス時の計算の煩雑さを防ぐために1多く確保
	bool cards[4][14] = {};

	for (int i = 0; i < n; ++i) {
		char suit;
		int num;
		cin >> suit >> num;
		int suit_num;
		switch (suit)
		{
		case 'S':
			suit_num = 0;
			break;
		case 'H':
			suit_num = 1;
			break;
		case 'C':
			suit_num = 2;
			break;
		case 'D':
			suit_num = 3;
			break;
		default:
			throw "input error";
		}

		cards[suit_num][num] = true;
	}
	for (int i = 0; i < 4; i++) {
		const char suit_char[4] = { 'S', 'H', 'C', 'D' };
		for (int j = 1; j <= 13; j++) {
			if (false == cards[i][j]) {
				cout << suit_char[i] << ' ' << j << endl;
			}
		}
	}
	return 0;
}
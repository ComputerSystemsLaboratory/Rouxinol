#include <iostream>
#include <bitset>
#include <cstdio>
using namespace std;

bitset<10000> cookie[10];
int r, c;

int main() {
	//freopen("0525-input.txt", "r", stdin);
	while (cin >> r >> c && r > 0) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				bool upwards; cin >> upwards;
				cookie[i][j] = upwards;
			}
		}
		int permute_r = 1 << r;
		int result = 0;
		do {
			for (int i = 0; i < r; i++) {
				if (permute_r & (1 << i)) cookie[i].flip();
			}
			int possible_answer = 0;
			for (int j = 0; j < c; j++) {
				int up_cookie_count = 0;
				for (int i = 0; i < r; i++) {
					if (cookie[i][j]) up_cookie_count++;
				}
				up_cookie_count = max(up_cookie_count, r - up_cookie_count);
				possible_answer += up_cookie_count;
			}
			result = max(result, possible_answer);
			for (int i = 0; i < r; i++) {
				if (permute_r & (1 << i)) cookie[i].flip();
			}
		} while (--permute_r);
		cout << result << endl;
	}
}
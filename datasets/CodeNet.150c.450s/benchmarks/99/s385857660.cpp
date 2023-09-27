#include <iostream>
using namespace std;

const char fig[] = { 'm', 'c', 'x', 'i' };

int main() {

	int n;
	int mcxi[4] = { };
	string s;
	char c;
	int pos;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 2; ++j) {
			cin >> s;
			for (int k = s.size() - 1; k >= 0; --k) {
				c = s.at(k);
				switch (c) {
				case 'm':
					mcxi[0]++;
					pos = 0;
					break;
				case 'c':
					mcxi[1]++;
					pos = 1;
					break;
				case 'x':
					mcxi[2]++;
					pos = 2;
					break;
				case 'i':
					mcxi[3]++;
					pos = 3;
					break;
				default:
					if (c != ' ') {
						mcxi[pos] += c - '1';
					}
					break;
				}
			}
		}
		// carry up
		for (int j = 3; j >= 0; --j) {
			if (mcxi[j] > 9) {
				mcxi[j] -= 10;
				mcxi[j - 1]++;
			}
		}
		// output
		for (int j = 0; j < 4; ++j) {
			if (mcxi[j] == 1) {
				cout << fig[j];
			} else if (mcxi[j] > 1) {
				cout << mcxi[j] << fig[j];
			}
			mcxi[j] = 0; // initialize
		}
		cout << endl;
	}

	return 0;
}
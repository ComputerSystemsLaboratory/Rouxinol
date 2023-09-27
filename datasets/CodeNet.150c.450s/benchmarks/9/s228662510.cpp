#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int check = 0;
	do {
		string word;
		cin >> word;
		int num = word.size() - 1;
		if (!(word[0] == '-')) {
			int m;
			cin >> m;
			vector<int> h(m);
			for (int i = 0; i < m; ++i) {
				cin >> h[i];
			}
			for (int j = 0; j < m; ++j) {
				for (int k = 0; k < h[j]; ++k) {
					char str = word[0];
					for (int l = 0; l < word.size() - 1; ++l) {
						word[l] = word[l + 1];
					}
					word[num] = str;
				}
			}
			cout << word << endl;
		}
		else {
			check = 1;
		}

	} while (check == 0);
	return 0;
}
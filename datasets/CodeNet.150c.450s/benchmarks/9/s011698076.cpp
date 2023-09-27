#include <iostream>
#include <string>
using namespace std;

int main() {
	int check = 0;
	do {
		string word;
		cin >> word;
		if (!(word[0] == '-')) {
			int m;
			cin >> m;
			int h;
			for (int i = 0; i < m; ++i) {
				cin >> h;
				string left = word.substr(0, h);
				string right = word.substr(h, word.size() - h);
				word = right + left;
			}
			cout << word << endl;
		}
		else {
			check = 1;
		}

	} while (check == 0);
	return 0;
}
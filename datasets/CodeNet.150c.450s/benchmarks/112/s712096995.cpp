#include <iostream>
#include <vector>

using namespace std;

struct myPair {
	int first;
	int second;
};

int main(void) {
	for (int n = 0; (cin >> n) && n != 0;) {
		vector<myPair> conversion;
		for (int i = 0; i < n; i++) {
			char preLetter = 0, afterLetter = 0;
			cin >> preLetter >> afterLetter;
			myPair tmpPair;
			tmpPair.first = preLetter;
			tmpPair.second = afterLetter;
			conversion.push_back(tmpPair);
		}
		int m = 0;
		cin >> m;
		vector<char> letters;
		for (int i = 0; i < m; i++) {
			char letter = 0;
			cin >> letter;
			letters.push_back(letter);
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < conversion.size(); j++) {
				if (conversion[j].first == letters[i]) {
					letters[i] = conversion[j].second;
					break;
				}
			}
			cout << letters[i];
		}
		cout << endl;
	}

	return 0;
}
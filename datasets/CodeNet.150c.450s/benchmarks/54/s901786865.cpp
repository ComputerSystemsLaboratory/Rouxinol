#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	string word, str;
	int count = 0;

	cin >> word;
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	while (cin >> str) {
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if (str == word) {
			count++;
		}
	}

	cout << count << "\n";
	return 0;
}
#include <cctype>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int count = 0;
	string word;
	cin >> word;
	string line;
	while (getline(cin,line)) {
		if (line == "END_OF_TEXT") {
			break;
		}
		istringstream stream(line);
		string piece;
		while (stream >> piece) {
			if (!isalpha(piece.front())) {
				piece.erase(0,1);
			}
			if (!isalpha(piece.back())) {
				piece.pop_back();
			}
			transform(piece.begin(),piece.end(),piece.begin(),::tolower);
			if (piece == word) {
				++count;
			}
		}
	}
	cout << count << endl;
}
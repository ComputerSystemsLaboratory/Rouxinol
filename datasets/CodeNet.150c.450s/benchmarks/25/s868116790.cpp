#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	int times[26] = { 0 };

	getline(cin, s);

	while(s != "") {
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		for(int i = 0;i < s.size();i++) {
			times[(int)s.at(i) - (int)'a']++;
		}

		getline(cin, s);
	}

	for(int i = 0;i < 26;i++) {
		cout << (char)(i + (int)'a') << " : " << times[i] << endl;
	}

	return 0;
}
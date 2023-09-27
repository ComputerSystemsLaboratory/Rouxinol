#include<iostream>
#include<istream>
#include<string>
using namespace std;

int main(void) {
	string moji;
	int p;
	int count[26] = {};
	char math[26];
	while (1) {
		getline(cin, moji);
		if (moji[0] == '\0')break;
		p = moji.size();

		for (int t = 0; t <= 25; t++) {
			for (int i = 0; i <= p; i++) {
				if (moji[i] == '\n')break;
				if ((moji[i] == 65 + t) || (moji[i] == 97 + t)) {
					count[t]++;
				}
			}
		}
	}
	
	for (int s = 0; s <= 25; s++) {
		math[s] = 97+s;
		cout << math[s] << " : " << count[s] << "\n";
	}
	return 0;
}
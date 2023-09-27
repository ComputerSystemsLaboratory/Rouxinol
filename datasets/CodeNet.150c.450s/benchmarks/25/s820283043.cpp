#include<iostream>
using namespace std;
#include<string>

int cnt[27] = { 0 };

int main() {
	string str;

	while (cin >> str) {

		for (int i = 0; i < str.size(); ++i) {
			if (str[i] <= 'Z' && str[i] >= 'A') {
				str[i] += 'a' - 'A';
			}
			if (str[i] <= 'z' && str[i] >= 'a') {
				cnt[str[i] - 'a']++;
			}
		}
	}

	for (int i = 0; i < 26; ++i) {
		cout << (char)('a' + i) << " : " << cnt[i] << endl;
	}

	return 0;
}
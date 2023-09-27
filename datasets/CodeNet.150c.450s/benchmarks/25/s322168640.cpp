#include <iostream>
#include <string>

using namespace std;

int counter[26];

int main() {
	bool end = false;
	while (!end) {
		string str;
		getline(cin, str);
		if (str.size() == 0)
			break;
		for (int i = 0; i < str.size(); i++) {
			char charactor = str.at(i);
			if ('A' <= charactor && charactor <= 'Z')
				charactor += 32;
			if ('a' <= charactor && charactor <= 'z')
				counter[charactor - 'a']++;
		}
		str = "";
	}
	for (int i = 0; i < 26; i++)
		cout << (char)(i + 'a') << " : " << counter[i] << endl;
	return 0;
}
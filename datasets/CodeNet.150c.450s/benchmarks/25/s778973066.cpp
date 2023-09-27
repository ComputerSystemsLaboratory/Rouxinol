#include<string>
#include<iostream>

using namespace std;

int main() {
	int charList[26];
	for (int i = 0; i < 26; i++) {
		charList[i] = 0;
	}

	string s;
	while (getline(cin, s)) {
		
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
			int index = int(s[i] - 97);
			charList[index] += 1;
		}
	}
	
	

	char title = 97;
	for (int i = 0; i < 26; i++) {
		cout << char(title + i);
		cout << " : ";
		cout << charList[i]<<endl;
	}


	return 0;
}
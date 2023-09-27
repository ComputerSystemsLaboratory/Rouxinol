
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str1, str2, str3;
	int i,count_up = 0;
	getline(cin, str1);
	for (i = 0; i < str1.length(); i++) { str1[i] = tolower(str1[i]); }
	while (1) {
		while (1) {
			cin >> str2;
			if (str2 == "END_OF_TEXT")break;
			for (i = 0; i < str2.length(); i++) { str2[i] = tolower(str2[i]); }
			if (str1 == str2)count_up++;
			if (str2 == "")break;
		}
		if (str2 == "END_OF_TEXT")break;
	}
	cout << count_up << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, j, count = 0;
	string str, str1;
	cin >> str >> str1;
	str = str + str;
	for (i = 0; i < str.size(); i++) {
		for (j = 0; j < str1.size(); j++) {
			if (str[i + j] == str1[j]) {
				count++;
			}
			else {
				count = 0;
				break;
			}
		}
		if (str1.size() == count) {
			cout << "Yes" << endl;
			break;
		}
	}
	if (str1.size() != count) {
		cout << "No" << endl;
	}
	return 0;
}
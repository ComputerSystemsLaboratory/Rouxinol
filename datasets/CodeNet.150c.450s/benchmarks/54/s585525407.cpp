#include<iostream>
using namespace std;
#include<string>

int main() {
	string temp;
	cin >> temp;
	for (int i = 0; i < temp.size(); ++i) {
		if (temp[i] <= 'Z' && temp[i] >= 'A') {
			temp[i] += 'a' - 'A';
		}
	}

	string str;
	int cnt = 0;
	while (cin >> str && str != "END_OF_TEXT") {
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] <= 'Z' && str[i] >= 'A') {
				str[i] += 'a' - 'A';
			}
		}
		if (str == temp) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
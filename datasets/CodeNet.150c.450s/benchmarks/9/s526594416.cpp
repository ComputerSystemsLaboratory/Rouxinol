#include<iostream>
using namespace std;
#include<string>

int main() {
	string str;
	while (cin >> str && str != "-") {

		int m;
		cin >> m;
		for (int i = 0; i < m; ++i) {
			int h;
			cin >> h;
			h = str.size() - h;
			string temp = "";
			for (int j = str.size() - h; j < str.size(); ++j) {
				temp += str[j];
			}
			for (int j = str.size() - 1; j >= 0 + h; --j) {
				str[j] = str[j - h];
			}
			for (int j = 0; j < temp.size(); ++j) {
				str[j] = temp[j];
			}
		}
		cout << str << endl;
	}

	return 0;
}
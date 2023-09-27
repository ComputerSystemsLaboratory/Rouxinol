#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	vector<string> IDlist;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		IDlist.emplace_back(str);
	}
	cin >> n;
	bool key = false;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		for (int j = 0; j < IDlist.size(); ++j) {
			if (IDlist[j] == str) {
				if (key == false) {
					cout << "Opened by " << str << endl;
					key = true;
				}
				else {
					cout << "Closed by " << str << endl;
					key = false;
				}
				break;
			}
			if (j == IDlist.size() - 1) {
				cout << "Unknown " << str << endl;
			}
		}
	}
	return 0;
}
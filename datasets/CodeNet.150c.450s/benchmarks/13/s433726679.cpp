#include <string>
#include <iostream>
using namespace std;

int main() {
	string str_1;
	string str_2;
	cin >> str_1 >> str_2;
	bool yes = false; // default to yes
	int len_1 = str_1.size();
	int len_2 = str_2.size();
	for (int i = 0;i != len_1;++i) {
		if (str_1[i] == str_2[0]) {
			int k = i;
			for (int j = 0;j < len_2;++j) {
				if (k == len_1) {
					k = 0;
				}
				if (str_1[k] == str_2[j]) {
					++k;
				} else {
					break;
				}
				if (j == len_2 - 1) {
					yes = true;
				}
			}
		}
	}
	cout << (yes ? "Yes" : "No") << endl;
}
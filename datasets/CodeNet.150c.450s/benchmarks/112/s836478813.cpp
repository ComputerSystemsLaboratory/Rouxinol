#include<string>
#include <iostream>
#include<vector>
using namespace std;

int main(void) {
	int numc = 0, nums = 0;
	cin >> numc;
	while (numc != 0) {
		string change;
		string str;
		string s, s1, s2;
		for (int i = 0; i < numc; i++) {
			cin >> s1 >> s2;
			change += s1 + s2;

		}
		cin >> nums;
		for (int i = 0; i < nums; i++) {
			cin >> s;
			str += s;
			for (int j = 0; j < numc; j++) {
				if (str[i] == change[j * 2]) {
					str[i] = change[j * 2 + 1];
					break;
				}
			}
		}
		cout << str << endl;
		cin >> numc;

	}
	return 0;
}
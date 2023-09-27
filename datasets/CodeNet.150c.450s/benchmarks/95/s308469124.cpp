#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int n;
	while(cin >> n && n) {
		string str;
		bool um = true;
		bool uf = false;
		bool df = false;
		int count = 0;
		for (int i = 0; i < n; ++i) {
			cin >> str;
			if (um) {
				if (str[1] == 'u') {
					if (uf) {
						++count;
						uf = false;
						um = false;
					}
					else {
						uf = true;
						df = false;
					}
				}
				else {
					uf = false;
				}
			}
			else {
				if (str[1] == 'd') {
					if (df) {
						++count;
						df = false;
						um = true;
					}
					else {
						uf = false;
						df = true;
					}
				}
				else {
					df = false;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
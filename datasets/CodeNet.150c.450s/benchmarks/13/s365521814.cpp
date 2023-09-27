#include <iostream>
#include <string>
using namespace std;

string s, p;

int main(){
	cin >> s >> p;
	s += s;
	bool f = false;
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < p.size(); j++) {
			if (p[j] != s[i + j]) {
				break;
			}
			if (j == p.size() - 1) {
				cout << "Yes" << endl;
				f = true;
				break;
			}
		}
		if (f) {
			break;
		}
	}
	if (!f) {
		cout << "No" << endl;
	}

	return 0;
}
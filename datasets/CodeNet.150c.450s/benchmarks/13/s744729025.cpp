#include <iostream>
#include <string>

using namespace std;

int main() {
	string base;
	string s;
	bool ok;

	cin >> base;
	cin >> s;

	for(int i = 0;i < base.size();i++) {
		ok = true;

		for(int j = 0;j < s.size();j++) {
			if(s.at(j) != base.at((i + j) % base.size())) {
				ok = false;
				break;
			}
		}

		if(ok) 
			break;
	}

	if(ok) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
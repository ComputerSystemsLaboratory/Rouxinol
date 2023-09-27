#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#define SPACE string(" ")
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cin >> ws;

	string str;
	vector<string> card;
	while (getline(cin, str)) {
		card.push_back(str);
	}

	vector<string> trump;
	for (int i = 1; i <= 52; i++) {
		stringstream ss;
		if (i <= 13) {
			ss << "S " << i;
		}
		else if (i <= 26) {
			ss << "H " << i - 13;
		}
		else if (i <= 39) {
			ss << "C " << i - 26;
		}
		else {
			ss << "D " << i - 39;
		}
		trump.push_back(ss.str());
	}

	vector<string>::iterator ti;
	for (int j = 0; j < card.size(); j++) {
		for (ti = trump.begin(); ti != trump.end();) {
			if (card[j] == *ti) {
				trump.erase(ti);
				break;
			}
			else {
				ti++;
			}
		}
	}

	for (int k = 0; k < trump.size(); k++) {
		cout << trump[k] << endl;
	}

	return 0;
}
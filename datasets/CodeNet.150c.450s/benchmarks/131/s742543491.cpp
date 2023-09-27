#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

string makeDigits(int a, int L) {
	stringstream ss;
	ss << a;
	string ret = "000000" + ss.str();
	return ret.substr(ret.size() - L);
}

string next(string d) {
	sort(d.begin(), d.end());
	int smallest = atoi(d.c_str());

	reverse(d.begin(), d.end());
	int largest = atoi(d.c_str());

	return makeDigits(largest - smallest, (int)d.size());
}

int main() {
	map<string, int> pos;
	int a, n;
	while (cin >> a >> n && (a || n)) {
		string digits = makeDigits(a, n);
		for (int i=0; ; ++i) {
			if (pos.count(digits)) {
				cout << pos[digits] << " " << atoi(digits.c_str()) << " " << i - pos[digits] << endl;
				break;
			}
			if (i < 20) {
				pos.insert(make_pair(digits, i));
			}
			digits = next(digits);
		}
		pos.clear();
	}
	return 0;
}
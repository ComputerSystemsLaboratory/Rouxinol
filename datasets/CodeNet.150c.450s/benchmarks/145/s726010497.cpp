#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string max = "";
	string mode;
	map <string, int> str;
	int count = 0;
	string a;
	while(cin >> a) {
		if(a == "EOF") {
			break;
		}
		if(a.size() > max.size()) {
			max = a;
		}
		str[a]++;
		if(str[a] > count) {
			count = str[a];
			mode = a;
		}
	}
	cout << mode << " " << max << endl;

	return 0;
}
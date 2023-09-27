#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	string str;
	string longstr;
	string maxwordstr;
	int maxword=0;
	map<string, int> words;
	while (cin >> str) {
		if (str.size() > longstr.size()) {
			longstr = str;
		}
		auto itr = words.find(str);
		if (itr != words.end()) {
			words[str]++;
		}
		else {
			words[str] = 1;
		}
		if (maxword < words[str]) {
			maxword = words[str];
			maxwordstr = str;
		}
	}
	cout << maxwordstr << " " << longstr<<endl;
	return 0;
}
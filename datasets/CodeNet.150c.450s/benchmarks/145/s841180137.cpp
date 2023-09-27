#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> split(string str, const char ch) {
	vector<string> res;
	string s = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ch) {
			res.push_back(s);
			s = "";
		}else{
			s += str[i];
		}
	}
	res.push_back(s);
	return res;
}

int main() {
	string source;
	getline(cin, source);
	
	string maxl = "", mode = "";
	int max = 0;
	vector<string> str = split(source, ' ');
	map<string, int> m;
	
	for (int i = 0; i < str.size(); i++) {
		if (m[str[i]] == 0) {
			m[str[i]] = 1;

			if (str[i].length() > maxl.length()) {
				maxl = str[i];
			}
		}else{
			m[str[i]]++;

			if (m[str[i]] > max) {
				max = m[str[i]];
				mode = str[i];
			}
		}
	}
	cout << mode << " " << maxl << endl;
	return 0;
}
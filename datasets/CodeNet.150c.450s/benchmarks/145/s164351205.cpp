#include <iostream>
#include <map>

using namespace std;

int main() {
	string str;
	map<string, int> m;
	string pop_s, len_s;
	int pop=0, len=0;
	while (cin >> str) {
		m[str]++;
		if (m[str]>pop) {
			pop = m[str];
			pop_s = str;
		}
		if (str.length()>len) {
			len = str.length();
			len_s = str;
		}
	}
	cout << pop_s << " " << len_s << endl;
}
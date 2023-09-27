#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>
#include <functional>
#include <cstdio>
using namespace std;

int L;

int to_i(string s) {
	int n;
	istringstream is(s);
	is >> n;
	return n;
}

string to_s(int n) {
	ostringstream os;
	os << n;
	return os.str();
}

string format(string a) {
	char buf[L+1];
	char format_str[] = "%0xd"; format_str[2] = L+'0';
	sprintf(buf, format_str, to_i(a));
	return string(buf);
}	

string next(string a) {
	a = format(a);
	int minimum, maximum;
	sort(a.begin(), a.end());
	minimum = to_i(a);
	sort(a.begin(), a.end(), greater<char>());
	maximum = to_i(a);
	return to_s(maximum - minimum);
}

int main() {
	string a;
	while (cin >> a >> L) {
		if (a == "0" && L == 0) break;
		map<string, int> gen;
		int i = 0;
		gen[a] = 0;
		while (true) {
			a = next(a); i++;
			if (gen.count(a)) {
				break;
			}
			gen[a] = i;
		}
		cout << gen[a] << ' ' << a << ' ' << i - gen[a] << endl;
	}
	return 0;
}
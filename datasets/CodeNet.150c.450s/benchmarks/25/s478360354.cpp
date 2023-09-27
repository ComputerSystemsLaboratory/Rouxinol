#include<iostream>
#include<string>

using namespace std;

int main() {
	string a,e;
	int i,d[26];
	for (i = 0; i < 26; i++) {
		d[i] = 0;
	}
	char b;
	while (1) {
		getline(cin, e);
		a += e;
		if (e == "") {
			break;
		}
	}
	string::iterator s;
	for (s = a.begin(); s != a.end(); s++) {
		*s = tolower(*s);
	}
	for (i = 0; i < 26; i++) {
		for (s = a.begin(); s != a.end(); s++) {
			b = 97 + i;
			if (*s == b) {
				d[i] += 1;
			}
		}
	}
	for (i = 0; i < 26; i++) {
		b = 97 + i;
		cout << b << " : " << d[i] << endl;
	}
	return 0;
}
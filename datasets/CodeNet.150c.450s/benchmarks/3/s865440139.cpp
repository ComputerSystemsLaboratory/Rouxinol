#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main() {
	int i, n, a, b;
	char com[10];
	string str, p;
	string::iterator j;
	cin >> str >> n;
	for (i = 0; i < n; i++) {
		cin >> com >> a >> b;
		if (com[2] == 'p') {
			cin >> p;
			str.replace(a, b - a + 1, p);
		} else if (com[2] == 'v') {
			string tmp;
			for (j = begin(str) + b; ; j--) {
				tmp += *j;
				if (j == begin(str) + a)break;
			}
			str.replace(a, b - a + 1, tmp);
		} else {
			string tmp;
			tmp.assign(str, a, b - a + 1);
			cout << tmp << endl;
		}
	}
	return 0;
}
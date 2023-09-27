#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string cmd;
		cin >> cmd;
		int a, b;
		cin >> a >> b;
		if (cmd == "print") { cout << str.substr(a, b-a+1) << endl; }
		if (cmd == "reverse") {
			string chg;
			chg.resize(b - a + 1);
			for (int i = a; i <= b; i++) { chg[i-a] = str[i]; }
			for (int i = a; i <= b; i++) { str[i] = chg[b-i]; }
		}
		if (cmd == "replace") {
			string p;
			cin >> p;
			str.replace(a, b - a + 1, p);
		}
	}
	return 0;
}

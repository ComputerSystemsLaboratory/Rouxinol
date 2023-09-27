#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str, rep, cmd;
int main() {
	int num, beg, end;
	cin >> str >> num;
	for (int i = 0; i < num; i++) {
		cin >> cmd;
		if (cmd == "print") {
			cin >> beg >> end;
			for (int j = beg; j <= end; j++) {
				cout << str[j];
			}
			cout << endl;
		}
		else if (cmd == "reverse") {
			cin >> beg >> end;
			reverse(str.begin() + beg, str.begin() + end + 1);
		}
		else if (cmd == "replace") {
			cin >> beg >> end >> rep;
			str.replace(beg, rep.size(), rep);
		}
	}
	return 0;
}

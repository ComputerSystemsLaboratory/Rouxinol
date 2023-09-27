#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str, o, p, m, str2;
	int i, q, a, b, j, x, c;
	cin >> str >> q;
	for (i = 0; i<q; i++) {
		cin >> o;
		if (o == "print") {
			cin >> a >> b;
			for (j = a; j <= b; j++)
				cout << str[j];
			cout << endl;
		}
		else if (o == "reverse") {
			cin >> a >> b;
			reverse(str.begin()+a,str.begin()+b+1);
		}
        else if (o == "replace") {
			cin >> a >> b >> p;
			str.replace(a,b-a+1,p);
		}
	}
}
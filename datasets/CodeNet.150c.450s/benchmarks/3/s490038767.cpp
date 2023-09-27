#include <iostream>
#include <string>
using namespace std;

int main() {
	int c,p,q,r,i,j;
	string a,b,t,s;
	cin >> a >> c;
	for (i = 0; i < c; i++) {
		cin >> b;
		if (b == "print") {
			cin >> p >> q;
			cout << a.substr(p, q - p + 1)<<endl;
		}
		if (b == "reverse") {
			cin >> p >> q;
			t = a.substr(p, q - p + 1);
			for (j = 0; j < q - p + 1;j++) {
				a.replace(p+j, 1, t.substr(q - p - j,1));
			}
		}
		if (b == "replace") {
			cin >> p >> q >> s;
			a.replace(p, q - p + 1, s);
		}
	}
	return 0;
}
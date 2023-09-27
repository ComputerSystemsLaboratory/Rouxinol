#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	int n; cin >> n;
	int a, b, c, d;	a = b = c = d = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "AC") a++;
		else if (s == "WA") b++;
		else if (s == "TLE") c++;
		else if (s == "RE") d++;
	}
	cout << "AC x " << a << endl;
	cout << "WA x " << b << endl;
	cout << "TLE x " << c << endl;
	cout << "RE x " << d << endl;
    return 0;
}
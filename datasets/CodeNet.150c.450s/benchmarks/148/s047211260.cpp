#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, AC = 0, WA = 0, TLE = 0, RE = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		if(s[0] == 'A')
			++AC;
		else if(s[0] == 'W')
			++WA;
		else if(s[0] == 'T')
			++TLE;
		else
			++RE;
	}

	cout << "AC x " << AC << '\n';
	cout << "WA x " << WA << '\n';
	cout << "TLE x " << TLE << '\n';
	cout << "RE x " << RE << '\n';
	return 0;
}
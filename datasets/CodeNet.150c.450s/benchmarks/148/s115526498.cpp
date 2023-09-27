#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	vector<int> ans(4,0);

	for (int i = 0; i < n; i++) {
		cin >> s;
		if		(s == "AC")	ans[0]++;
		else if	(s == "WA")	ans[1]++;
		else if	(s == "TLE")ans[2]++;
		else				ans[3]++;
	}

	cout << "AC x " << ans[0] << endl;
	cout << "WA x " << ans[1] << endl;
	cout << "TLE x " << ans[2] << endl;
	cout << "RE x " << ans[3] << endl;
}
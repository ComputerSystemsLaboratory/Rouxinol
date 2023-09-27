#include <bits/stdc++.h>

using namespace std;

int n, ac, wa, tle, re;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
// 	freopen(".inp", "r", stdin);
//  	freopen(".out", "w", stdout);
 	cin >> n;
 	for (int i = 0; i < n; i++) {
 		string s;
 		cin >> s;
 		if (s == "AC") ac++;
 		if (s == "WA") wa++;
 		if (s == "TLE") tle++;
 		if (s == "RE") re++;
 	}
 	cout << "AC x " << ac << endl;
 	cout << "WA x " << wa << endl;
 	cout << "TLE x " << tle << endl;
 	cout << "RE x " << re << endl;
	
}
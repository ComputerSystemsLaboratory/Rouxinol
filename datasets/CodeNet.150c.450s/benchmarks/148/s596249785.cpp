#include <bits/stdc++.h>

#define I_AM_SPEED ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;

int32_t main() {
	int n;
	cin >> n;
	string s;
	vector<string> v = {"AC", "WA", "TLE", "RE"};
	unordered_map<string, int> m = {{"AC",  0},
	                                {"WA",  0},
	                                {"TLE", 0},
	                                {"RE",  0}};
	for (; cin >> s;) {
		m[s]++;
	}
	for (int i = 0 ; i < 4  ; i++) {
		string x = v[i];
		cout << x << " x " << m[x] << endl;
	}
}
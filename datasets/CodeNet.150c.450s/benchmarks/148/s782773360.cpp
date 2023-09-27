#include<bits/stdc++.h>
using namespace std;


int main() {
	unordered_map<string, int> m;
	m["AC"] = 0;
	m["WA"] = 0;
	m["TLE"] = 0;
	m["RE"] = 0;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		m[s]++;
	}
	string a[] = {"AC" , "WA" , "TLE" , "RE"};
	for (int i = 0; i < 4; i++) {
		cout << a[i] << " x " << m[a[i]] << endl;
	}
}
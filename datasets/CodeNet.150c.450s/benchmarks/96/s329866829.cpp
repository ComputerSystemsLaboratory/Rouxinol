#include <bits/stdc++.h>

using namespace std;

string S;
string button[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve() {
	int i = 0;
	int len = (int)S.size();
	
	while (i < len) {
		char c;
		c = S[i++];
		int p = 0;
		
		if (c == '0') continue;
		while (i < len && c == S[i++]) p++;
		
		int id = c - '0';
		string puts =  button[id];
		int size = (int)puts.size();
		cout << puts[p % size];
	}
	
	cout << endl;
}

int main() {
	int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> S;
		solve();
	}
	
	return 0;
}
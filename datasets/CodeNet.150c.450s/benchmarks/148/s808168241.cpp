#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

void mkay(ll& a){
	if(a >= mod)
		a -= mod;
}

int main(){
	int n; cin >> n;
	int c[4] = {0, 0, 0, 0};
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		c[(s[0] == 'A' ? 0 : (s[0] == 'W' ? 1 : (s[0] == 'T' ? 2 : 3)))]++;

	}
	for(int i = 0; i < 4; i++){
		string s = (i == 0 ? "AC" : (i == 1 ? "WA" : (i == 2 ? "TLE" : "RE")));
		s += " x ";
		cout << s << c[i] << endl;
	}
}
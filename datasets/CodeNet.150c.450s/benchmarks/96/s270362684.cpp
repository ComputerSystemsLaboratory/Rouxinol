#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

string input[10] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

int main() {
	cout << fixed << setprecision(9);
	ios :: sync_with_stdio(0);

	int t; cin >> t;
	while(t --) {
		string s; cin >> s;
		string t = "";
		for(char c : s)
			if(c == '0') {
				if(t.size()) {
					int l = input[t[0] - '0'].size();
					cout << input[t[0] - '0'][(t.size() - 1) % l];
					t = "";
				}
			} else
				t += c;
		cout << '\n';
	}

	return 0;
}
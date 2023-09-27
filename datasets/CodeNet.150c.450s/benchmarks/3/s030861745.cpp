#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	string s, t,u,c;
	int n,a,b,i;
	cin >> s;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> c; cin >> a; cin >> b;
		t = s.substr(a, b - a + 1);
		if (c == "print") {
			cout << t << endl;
		}
		else if (c == "reverse") {
			reverse(t.begin(), t.end());
			s.replace(a, b - a + 1, t);
		}
		else if (c == "replace") {
			cin >> u;
			s.replace(a, b - a + 1, u);
		}
	}
	return 0;
}

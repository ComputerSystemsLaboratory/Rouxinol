#include<iostream>
#include<string>
#include<set>
using namespace std;
string reverse(string b) {
	string a;
	for (size_t i = 1; i <= b.size(); i++) {
		a += b[b.size() - i];
	}
	return a;
}
void solve() {
	set<string> ans;
	string s; cin >> s;
	for (size_t i = 1; i < s.size(); i++) {
		string a = s.substr(0, i);
		string b = s.substr(i, s.size() - i);
		ans.insert(a + b);
		ans.insert(b + a);
		ans.insert(a + reverse(b));
		ans.insert(b + reverse(a));
		ans.insert(reverse(a) + b);
		ans.insert(reverse(b) + a);
		ans.insert(reverse(a) + reverse(b));
		ans.insert(reverse(b) + reverse(a));
	}
	cout << ans.size() << endl;
	return;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
}
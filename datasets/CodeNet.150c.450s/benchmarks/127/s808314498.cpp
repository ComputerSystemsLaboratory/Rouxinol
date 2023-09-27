#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<string, bool> m;

string rev(string str) {
	reverse(str.begin(), str.end());
	return str;
}
int cnt2(string s) {
	if (m.find(s) != m.end()) return 0;
	m[s] = true;
	return 1;
}
int cnt(string s1, string s2) {
	return cnt2(s1+s2) + cnt2(s2+s1);
}
int count(string s1, string s2) {
	return cnt(s1, s2) + cnt(rev(s1), s2) + cnt(s1, rev(s2)) + cnt(rev(s1), rev(s2));
}
int f() {
	m.clear();
	string str; cin >> str;
	int ret = 0;
	for (int i = 1; i < str.size(); ++i) {
		ret += count(str.substr(0, i), str.substr(i, str.size()-i));
	}
	return ret;
}

int main() {
	int N; cin >> N;
	for (int t = 0; t < N; ++t) {
		cout << f() << endl;
	}
}
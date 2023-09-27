#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
template <class T>
bool find(vector<T> v, T key) {
	for (size_t i = 0; i < v.size(); i++)
		if (v[i] == key)return true;
	return false;
}
int main() {
	string s;
	getline(cin, s);
	vector<string>v;
	map<string, int>mp;
	int m = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			string str = s.substr(m, i - m);
			if (find(v, str))mp[str]++;
			else { v.push_back(str); mp[str] = 1; }
			m = i + 1;
		}
	}
	string str = s.substr(m, s.size() - m);
	if (find(v, str))mp[str]++;
	else { v.push_back(str); mp[str] = 1; }
	string ans1, ans2;
	int splatoon = 0;
	for (int i = 0; i < v.size(); i++) {
		if (mp[v[i]] > splatoon) { ans1 = v[i]; splatoon = mp[v[i]]; }
		if (ans2.size() < v[i].size())ans2 = v[i];
	}
	cout << ans1 << ' ' << ans2 << '\n';
	char ch; cin >> ch;
}
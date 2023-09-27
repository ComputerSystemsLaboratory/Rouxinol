#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
typedef pair<string, string> Ps;

int main() {
	int m;
	cin >> m;
	for (int x = 0; x < m; x++) {
		vector<Ps>v;
		string s;
		cin >> s;
		for (int i = 1; i < s.size(); i++) {
			string a, b;
			a = s.substr(0, i);
			b = s.substr(i);
			string ra = a;
			reverse(ra.begin(), ra.end());
			string rb = b;
			reverse(rb.begin(), rb.end());
			v.push_back(Ps(a, b));
			v.push_back(Ps(b, a));
			v.push_back(Ps(ra, b));
			v.push_back(Ps(b, ra));
			v.push_back(Ps(a, rb));
			v.push_back(Ps(rb, a));
			v.push_back(Ps(ra, rb));
			v.push_back(Ps(rb, ra));
		}
		sort(v.begin(), v.end());
		v.erase(unique(v.begin(), v.end()), v.end());
		vector<string>va;
		for (int i = 0; i < v.size(); i++) {
			string sa = v[i].first;
			sa += v[i].second;
			va.push_back(sa);
		}
		sort(va.begin(), va.end());
		va.erase(unique(va.begin(), va.end()), va.end());
		cout << va.size() << endl;
		}
	return 0;
}
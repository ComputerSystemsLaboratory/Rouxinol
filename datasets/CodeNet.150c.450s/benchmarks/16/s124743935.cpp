#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main()
{
	int sum = 0;
	string s;
	vector<int> st;
	vector<P> res;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '/') {
			if (!st.empty()) {
				sum += i - st.back();
				P p(i - st.back(), st.back());
				while (!res.empty() && res.back().second >= p.second) {
					p.first += res.back().first;
					res.pop_back();
				}
				res.push_back(p);
				st.pop_back();
			}
		}
		else if(s[i] == '\\') {
			st.push_back(i);
		}
	}
	cout << sum << endl;
	cout << res.size();
	for (int i = 0; i < res.size(); i++) {
		cout << ' ' << res[i].first;
	}
	cout << endl;
	return 0;
}
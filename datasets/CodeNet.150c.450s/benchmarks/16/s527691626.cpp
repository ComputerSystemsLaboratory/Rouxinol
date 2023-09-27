#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for(int i = 0; i < (n); i++)
#define mp make_pair
using namespace std;
stack<int>st;
string s;
vector<pair<int, int>>ans;
signed main() {
	cin >> s;
	for0(i, s.size()) {
		if (s[i] == '\\') st.push(i);
		else if (s[i] == '/' && st.size()) {
			int p = st.top(); st.pop();
			int t = i - p;
			while (ans.size() && p < ans.back().first) {
				t += ans.back().second;
				ans.pop_back();
			}
			ans.push_back(mp(p, t));
		}
	}
	int sum = 0; for (pair<int, int> p : ans)sum += p.second;
	cout << sum << endl << ans.size();
	for (pair<int, int> p : ans)cout << ' ' << p.second; cout << endl;
}

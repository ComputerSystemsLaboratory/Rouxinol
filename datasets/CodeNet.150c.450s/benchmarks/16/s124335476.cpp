#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define vec vector
#define pb push_back

int main(void)
{
	string s;
	cin >> s;
	stack<int> x;
	stack<pair<int, int>> keep;
	int sum = 0;
	rep(i, s.length()) {
		if (s[i] == '_') continue;
		else if (s[i] == '/') {
			if (!x.empty()) {
				int k = x.top();
				x.pop();
				sum += i - k;
				int a = i - k;
				while(!keep.empty()) {
					pair<int, int> p = keep.top();
					if (p.first < k) break;
					a += p.second;
					keep.pop();
				}
				keep.push(make_pair(k, a));
			}
		} else x.push(i);
	}

	vec<int> out;
	while(!keep.empty()) {
		out.pb(keep.top().second);
		keep.pop();
	}

	cout << sum << endl;
	cout << (int)out.size();
	reverse(out.begin(), out.end());
	rep(i, out.size()) cout << " " << out[i];
	cout << endl;
	return 0;
}
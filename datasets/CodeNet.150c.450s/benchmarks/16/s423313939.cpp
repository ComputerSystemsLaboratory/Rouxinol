#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>

// 19:48
using namespace std;

int main() {
	stack<int> S1;// location of backslashes 
	stack<pair<int, int> > S2;// index, area
	int sum = 0;
	string s;
	cin >> s;
	for (int i=0; i<s.length(); ++i) {
		char ch = s[i];
		//cout << "i: " << i << endl;
		if (ch == '\\') S1.push(i);
		if (ch == '/' && !S1.empty()) {
			int j = S1.top(); S1.pop();
  		int area = i-j;
  		sum += area; // 別にsumをここで計算しなくてもS2が計算できていれば集計したら良い...
			// DDUUDDUU のような例を考えるとよい(D:down, U:up)
			while (S2.size() > 0 && S2.top().first > j) {
				area += S2.top().second; S2.pop();
			}
  		S2.push(make_pair(j, area));
		}
	}
	vector<int> ans;
	while(S2.size() > 0) {
		//cout << "S2.size() = " << S2.size() << endl;
		ans.push_back(S2.top().second);
		S2.pop();
	}
	reverse(ans.begin(), ans.end());
	cout << sum << endl;
	cout << ans.size();
	for (int i=0; i<ans.size(); ++i) {
		cout << " " << ans[i];
	}
	cout << endl;
	return 0;
}


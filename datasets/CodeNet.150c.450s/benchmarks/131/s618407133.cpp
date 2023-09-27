#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int main() {
	int a, l;
	while (cin >> a >> l, a || l) {
		string str = to_string(a);
		vector<string> vs;
		if (str.size() < l) {
			while (l - str.size()>0) {
				str = "0" + str;
			}
		}
		vs.push_back(str);

		int ii, ans;
		bool flag = false;
		while (!flag) {
			sort(str.begin(), str.end());
			string rev = str;
			reverse(rev.begin(), rev.end());

			string sub = to_string(stoi(rev) - stoi(str));
			if (sub.size() < l) {
				while (l - sub.size()>0) {
					sub = "0" + sub;
				}
			}

			REP(i, 0, vs.size()) {
				if (vs[i] == sub) {
					flag = true;
					ii = i;
					ans = vs.size() - i;
					break;
				}
			}

			vs.push_back(sub);
			str = sub;
		}

		cout << ii << " " << to_string(stoi(vs[ii])) << " " << ans << endl;

	}

	return 0;
}
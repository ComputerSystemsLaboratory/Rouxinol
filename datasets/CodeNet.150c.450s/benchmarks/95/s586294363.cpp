#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
#define FOR(i, a, n) for(int i=a; i<n; i++)
#define RFOR(i, a, n) for(int i=n-1; i>=a; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)

int main()
{
	int n;
	while (cin >>n, n) {
		vector<string> s;
		REP(i, n) {
			string str;
			cin >> str;
			s.push_back(str);
		}

		bool l = {}, r = {};
		int cnt = 0;
		pair<bool, bool> state;
		state.first = false;
		state.second = false;
		REP(i, s.size()) {
			if (s[i] == "lu") l = true;
			else if (s[i] == "ru") r = true;
			else if (s[i] == "ld") l = false;
			else if (s[i] == "rd") r = false;

			if (!state.first && !state.second) {
				if (l && r) {
					cnt++;
					state.first = true;
					state.second = true;
				}
			}
			else if (state.first && state.second) {
				if (!l && !r) {
					cnt++;
					state.first = false;
					state.second = false;
				}
			}
		}

		cout << cnt << endl;
	}
	return 0;
}
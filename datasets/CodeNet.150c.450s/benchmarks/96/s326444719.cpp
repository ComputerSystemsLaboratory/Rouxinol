#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	vector<string> dig = { ".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	vector<int> cn = { 5,3,3,3,3,3,4,3,4 };
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	REP(j, n) {
		string s;
		cin >> s;

		int i = 0;
		while (i < s.size()) {
			char c = s[i];
			++i;
			if (c != '0') {
				int cnt = 0;
				while (s[i] == c) {
					cnt++;
					++i;
				}
				cout << dig[int(c - '0') - 1][cnt%cn[int(c - '0') - 1]];
			}
		}
		cout << endl;
	}
	
	return 0;
}
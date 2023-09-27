#include <iostream>
#include <algorithm>
#include <map>
#define FOR(i,bg,ed) for(ll i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
//#define int long long
using namespace std;
typedef long long ll;
const int INF = 1e9;

int a[30];
int L;

int nextNum(string pre, int L)
{
	map<char, int> cnt;
	if (pre.length() < L) {
		cnt['0'] = L - pre.length();
	}
	REP(i,pre.length()) cnt[pre[i]]++;

	string small = "", large = "";
	for (char c='0'; c<='9'; c++) {
		REP(i,cnt[c]) {
			small = small + c;
			large = c + large;
		}
	}

	//cout << "large = " << large << endl;
	//cout << "small = " << small << endl;

	return stoi(large) - stoi(small);
}
 
signed main()
{
	while (true) {
		cin >> a[0] >> L;
		if (a[0] == 0 && L == 0) break;
		FOR(i,1,30) {
			a[i] = nextNum(to_string(a[i-1]), L);
			//cout << a[i] << endl;
		}

		int ans_i, ans_j;
		for (int i=29; i>0; i--) {
			for (int j=0; j<i; j++) {
				if (a[i] == a[j]) {
					ans_i = i;
					ans_j = j;
				}
			}
		}

		cout << ans_j << " " << a[ans_i] << " " << ans_i - ans_j << endl;
	}
}
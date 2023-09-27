/*
 * B.cpp
 *
 *  Created on: 2017/06/18
 *      Author: aihara
 */

#include<bits/stdc++.h>
#define MYDEBUG
#ifdef MYDBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#else
#define dbp(x)
#endif
#define ll long long
#define rep(i,from,to) for(int i=from; i<to; ++i)
#define REP(i,from,to) for(int i=from; i<=to; ++i)

using namespace std;

const int MAX_N = 1000100;
bool vis[MAX_N];
int num[MAX_N];
string s;
int n;

string myitoa(int n) {
	string ret = "";
	while (n > 0) {
		ret = (char) ((n % 10) + '0') + ret;
		n /= 10;
	}
	if (ret == "") {
		return "0";
	} else {
		return ret;
	}
}

void solve() {
	while (cin >> s >> n, n) {
		memset(vis, 0, sizeof(vis));
		memset(num, 0, sizeof(num));
		int zeroes = max(0, n - (int) s.size());
		s += string(zeroes, '0');
		int i = 0;
		vis[atoi(s.c_str())] = true;
		num[atoi(s.c_str())] = i;
		i++;
		while (true) {
			string big = s, small = s;
			sort(big.rbegin(), big.rend());
			sort(small.begin(), small.end());
//			cout << "big: " << big << endl;
//			cout << "sma: " << small << endl;
			int bigN = atoi(big.c_str());
			int smaN = atoi(small.c_str());
			int diff = bigN - smaN;
			s = myitoa(diff);
			zeroes = max(0, n - (int) s.size());
			s += string(zeroes, '0');
//			cout << "diff: " << diff << endl << endl;
			if (diff < 0) {
				cout << "ERROR" << endl;
				return;
			}
			if (!vis[diff]) {
				vis[diff] = true;
				num[diff] = i;
			} else { //found duplicate
				int j = num[diff];
				printf("%d %d %d\n", j, diff, i - j);
				break;
			}
			i++;
		}
	}
}

int main() {
	solve();
//	char str[100];
//	itoa(123, str, 10);
//	cout << str << endl;
//	string st = str;
//	cout << st << endl;
//	cout << st.size() << endl;

}
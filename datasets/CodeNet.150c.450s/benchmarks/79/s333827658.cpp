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
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, r;
	while (1) {
		cin >> n >> r;
		if (!n) break;
		vector<int> card(n);
		REP(i, n) {
			card[i] = n - i;
		}
		REP(i, r) {
			int p, c;
			cin >> p >> c;
			int *tmp = new int[c];
			REP(j, c) tmp[j] = card[p - 1 + j];
			RREP(j,p-1 ) card[j+c] = card[j];
			REP(j, c) card[j] = tmp[j];
		}
		cout << card[0] << endl;


	}
	return 0;
}
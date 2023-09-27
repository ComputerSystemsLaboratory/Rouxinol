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
#define pb(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007


using namespace std;



int main() {
	int n,cnt=0;
	cin >> n;
	vector<int> v;
	REP(i, n) {
		int a;
		cin >> a;
		v.pb(a);
	}
	REP(i, n) {
		int mini = i;
		FOR(j, i, n) {
			if (v[j] < v[mini]) {
				mini = j;
			}
		}
		if (i != mini) {
			swap(v[i], v[mini]);
			cnt++;
		}
	}
	REP(i, n) {
		cout << v[i];
		if (i != n - 1) cout << " ";
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}
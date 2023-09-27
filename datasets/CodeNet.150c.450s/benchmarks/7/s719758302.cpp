#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, 0, n)

using namespace std;

vector<int> v;
int t;

int main(){
	REP(i, 10) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	cout << v[9] << endl << v[8] << endl << v[7] << endl;
}
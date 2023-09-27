#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main(){
	int D;
	cin >> D;
	
	vector<int> c(26);
	rep(i, 26) cin >> c[i];
	
	vector<vector<int>> s(D, vector<int> (26));
	rep(d, D) {
		rep(i, 26) {
			cin >> s[d][i];
		}
	}
	
	vector<int> t(D);
	rep(d, D) cin >> t[d];
	
	vector<int> last(26, 0);
	
	int v = 0;
	rep(d, D) {
		v += s[d][t[d]-1];
//      cout << v << endl;
		rep(i, 26) {
			if (i == t[d]-1) {
				last[i] = d + 1;
			}
			v -= c[i] * (d+1 - last[i]);
		}
		cout << v << endl;
	}
}

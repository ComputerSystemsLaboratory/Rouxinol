#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(A) A.begin(), A.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int last[26];

vector<int> calcScore(int D, vector<int> c, vector<vector<int>> s, vector<int> t){
	int sat = 0;
	memset(last, 0, sizeof(last));

	vector<int> res; res.clear();
	rep (d, D){
		int j = t[d];
		last[j] = d + 1;
		rep (i, 26){
			sat -= (d + 1 - last[i]) * c[i];
		} // end rep
		sat += s[d][j];
		res.push_back(sat);
	} // end rep
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int D; cin >> D;
	vector<int> c(26, 0);
	rep (i, 26){
		cin >> c[i];
	} // end rep
	vector<vector<int>> s(D, vector<int>(26, 0));
	rep (i, D){
		rep (j, 26){
			cin >> s[i][j];
		} // end rep
	} // end rep

	vector<int> t(D, 0);
	rep (i, D){
		cin >> t[i];
		t[i]--;
	} // end rep

	vector<int> res = calcScore(D, c, s, t);
	rep (i, (int)res.size()){
		cout << res[i] << endl;
	} // end rep

	return 0;
}

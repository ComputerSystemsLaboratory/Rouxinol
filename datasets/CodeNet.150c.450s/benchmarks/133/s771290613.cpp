#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <algorithm>
//#include <iomanip> : 表示桁数, ex) cout << fixed << setprecision(15) << ...
//#include <unordered_set>

#define pi 3.14159265358979323846
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using ld = long double;
using Byte = unsigned char;
using namespace std;

//string ans = "Yes";


void SetAns() {
	/// normal_input
	int D;
	cin >> D;

	vector<int> c(26);
	vector<vector<int>> s(D, vector<int>(26));
	rep(i, 26) cin >> c[i];
	rep(i, D) rep(j, 26) cin >> s[i][j];;

	/// special_input
	vector<int> t(D);
	rep(i, D) cin >> t[i];

	/// main process
	vector<int> last(26, -1);
	int satisfy = 0;
	rep(date, D) {
		last[t[date] - 1] = date;
		satisfy += s[date][t[date] - 1];
		rep(i, 26) 
			satisfy -= c[i] * (date - last[i]);
		cout << satisfy << endl;
	}


	//	cin >> ;
	return;
}

int main() {
	SetAns();
//	cout << ans << endl;
	return 0;
}

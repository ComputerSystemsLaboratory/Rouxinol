#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>

using namespace std;

typedef  long long int lint;

#define rep(i, n) for (lint i = 0; i < n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define mp make_pair
#define enld endl

lint minus(vector<lint>lastdi, vector<lint>C) {
	lint ans = 0;
	rep(i, 26) {
		ans += C[i] * lastdi[i];
	}
	return ans;
}

int main() {
	lint D;
	cin >> D;
	vector<lint>C(26);
	rep(i, 26) {
		cin >> C[i];
	}
	vector<vector<lint>>S(D, vector<lint>(26));
	rep(i, D) {
		rep(j, 26) {
			cin >> S[i][j];
		}
	}
	vector<lint>T(D);
	rep(i, D) {
		cin >> T[i];
	}
	vector<lint>lastdi(26);
	lint ans = 0;
	rep(i, D) {
		lastdi[T[i] - 1] = i + 1;
		ans += S[i][T[i] - 1];
		lint minus = 0;
		rep(j, 26) {
			minus += C[j] * (i+1-lastdi[j]);
		}
		/*rep(j, 26) {
			cout << C[j] * (i + 1 - lastdi[j]) << ' ';
		}
		cout << endl;
		cout << minus << endl;
		rep(j, 26) {
			cout << lastdi[j] << ' ';
		}
		cout << enld;
		cout << ans << ' ';*/
		ans -= minus;
		cout << ans << endl;
	}
}
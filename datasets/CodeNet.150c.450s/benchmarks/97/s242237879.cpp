#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

#define ll long long

#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)


using namespace std;

void solve();

int main(){

	solve();
	return 0;

}

void solve(){
	while (1) {
		vector<int> x;
		vector<int> y;
		x.clear();	y.clear();
		x.push_back(0);
		y.push_back(0);

		int n;
		cin >> n;
		if (n == 0)return;

		REP(i, n-1) {

			int ni, di;
			cin >> ni >> di;

			switch (di)
			{
			case 0:
				x.push_back(x[ni] - 1);
				y.push_back(y[ni]);
				break;
			case 1:
				x.push_back(x[ni]);
				y.push_back(y[ni] - 1);
				break;
			case 2:
				x.push_back(x[ni] + 1);
				y.push_back(y[ni]);
				break;
			case 3:
				x.push_back(x[ni]);
				y.push_back(y[ni] + 1);
				break;
			default:
				break;
			}

		}

		sort(x.begin(), x.end());	sort(y.begin(), y.end());

		cout << x[x.size()-1]-x[0] + 1 << ' ' << y[y.size()-1]-y[0]+ 1 << endl;
	}
}
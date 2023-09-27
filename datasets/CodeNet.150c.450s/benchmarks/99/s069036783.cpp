#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	int n;
	cin>>n;
	REP(i, n) {
		ll res1 = 0, res2 = 0;
		string a, b;
		cin>>a>>b;
		REP(i, a.size()) {
			if(a[i] == 'm') {
				if(i - 1 >= 0 && '2' <= a[i - 1] && '9' >= a[i - 1]) {
					res1 += (a[i - 1] - '0') * 1000;
				} else {
					res1 += 1000;
				}
			}
			if(a[i] == 'c') {
				if(i - 1 >= 0 && '2' <= a[i - 1] && '9' >= a[i - 1]) {
					res1 += (a[i - 1] - '0') * 100;
				} else {
					res1 += 100;
				}
			}
			if(a[i] == 'x') {
				if(i - 1 >= 0 && '2' <= a[i - 1] && '9' >= a[i - 1]) {
					res1 += (a[i - 1] - '0') * 10;
				} else {
					res1 += 10;
				}
			}
			if(a[i] == 'i') {
				if(i - 1 >= 0 && '2' <= a[i - 1] && '9' >= a[i - 1]) {
					res1 += (a[i - 1] - '0') * 1;
				} else {
					res1 += 1;
				}
			}
		}
		REP(i, b.size()) {
			if(b[i] == 'm') {
				if(i - 1 >= 0 && '2' <= b[i - 1] && '9' >= b[i - 1]) {
					res2 += (b[i - 1] - '0') * 1000;
				} else {
					res2 += 1000;
				}
			}
			if(b[i] == 'c') {
				if(i - 1 >= 0 && '2' <= b[i - 1] && '9' >= b[i - 1]) {
					res2 += (b[i - 1] - '0') * 100;
				} else {
					res2 += 100;
				}
			}
			if(b[i] == 'x') {
				if(i - 1 >= 0 && '2' <= b[i - 1] && '9' >= b[i - 1]) {
					res2 += (b[i - 1] - '0') * 10;
				} else {
					res2 += 10;
				}
			}
			if(b[i] == 'i') {
				if(i - 1 >= 0 && '2' <= b[i - 1] && '9' >= b[i - 1]) {
					res2 += (b[i - 1] - '0') * 1;
				} else {
					res2 += 1;
				}
			}
		}
		ll res = res1 + res2;
		string ans = "";
		if(res % 10 >= 2) {
			ans = to_string(res % 10) + 'i' + ans;
		} else if(res % 10 == 1) {
			ans = 'i' + ans;
		}
		res /= 10;
		if(res % 10 >= 2) {
			ans = to_string(res % 10) + 'x' + ans;
		} else if(res % 10 == 1) {
			ans = 'x' + ans;
		}
		res /= 10;
		if(res % 10 >= 2) {
			ans = to_string(res % 10) + 'c' + ans;
		} else if(res % 10 == 1) {
			ans = 'c' + ans;
		}
		res /= 10;
		if(res % 10 >= 2) {
			ans = to_string(res % 10) + 'm' + ans;
		} else if(res % 10 == 1) {
			ans = 'm' + ans;
		}
		cout<<ans<<endl;
	}
}
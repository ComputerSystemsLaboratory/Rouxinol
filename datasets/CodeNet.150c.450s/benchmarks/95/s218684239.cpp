#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<complex>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF (long long)1000000000
#define MOD 1000000007
#define EPS (long double) 1e-8
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int main(void) {
	while(1) {
		int n;
		cin>>n;
		if(n == 0) break;
		P d = P(0, 0);
		int res = 0;
		int b = 0;
		REP(i, n) {
			string buf;
			cin>>buf;
			if(buf == "lu") d.first = 1;
			if(buf == "ru") d.second = 1;
			if(buf == "ld") d.first = 0;
			if(buf == "rd") d.second = 0;
			if(d == P(1, 1) && !b) {
				++res;
				b = 1;
			}
			if(d == P(0, 0) && b) {
				++res;
				b = 0;
			}
		}
		cout<<res<<endl;
	}
}
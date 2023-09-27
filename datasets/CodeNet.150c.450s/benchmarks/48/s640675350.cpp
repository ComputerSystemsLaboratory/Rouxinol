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
typedef long double ld;
typedef pair<ll, ll> P;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int main(void) {
	while(1) {
		int e;
		cin>>e;
		if(e == 0) break;
		ll res = INF;
		for(ll i = 0; i * i * i <= e; ++i) {
			for(ll j = 0; j * j <= e - i * i * i; ++j) {
				res = min(res, (e - i * i * i - j * j) + i + j);
			}
		}
		cout<<res<<endl;
	}
}
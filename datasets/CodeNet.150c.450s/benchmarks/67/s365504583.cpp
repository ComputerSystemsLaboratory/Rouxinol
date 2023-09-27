#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<queue>
#include<stack>
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
	while(true) {
		int n;
		cin>>n;
		if(n == 0) break;
		int res = 0;
		FOR(i, 1, n) {
			int sum = 0;
			FOR(j, i, n) {
				sum += j;
				if(sum == n) {
					++res;
					break;
				} else if(sum > n) {
					break;
				}
			}
		}
		cout<<res<<endl;
	}
}
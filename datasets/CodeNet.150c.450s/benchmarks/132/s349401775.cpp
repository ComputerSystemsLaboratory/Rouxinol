#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define REEP(i, N) for(ll i = N - 1; i >= 0; --i)
#define FOR(i,m,n) for(ll i = m; i < n; ++i)
#define RFOR(i,m,n) for(ll i = n - 1; i >= m; --i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define PB push_back
#define KIRIAGE(a, b) a += (b - a % b) % b // a ??? b ????????°????????§?¢???????
#define CEIL(c, a, b) if(a % b == 0) { c = a / b;} else { c = a / b + 1;} // a / b ??\??????????°???´??°
#define sp(n) setprecision(n)
#define INF 1000000000
#define MOD 1000000007

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx4[4] = {1, 0, -1, 0};
int dy4[4] = {0, 1, 0, -1};
int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	while(true) {
		int n, r;
		cin>>n>>r;
		if(n==0&&r==0) return 0;
		vector<int> c(n, 0);
		int hav = 0;
		int pos = 0;
		int winner = -1;
		while(true) {
			if(r > 0) {
				++c[pos];
				if (c[pos] == 1) ++hav;
				--r;
				if(r == 0 && hav == 1) {
					winner = pos;
					break;
				}
			} else {
				if(c[pos] != 0) --hav;
				r = c[pos];
				c[pos] = 0;
			}
			if(pos < n - 1) ++pos;
			else pos = 0;
		}
		cout<<winner<<endl;
	}
}
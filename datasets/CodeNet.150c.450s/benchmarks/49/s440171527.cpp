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
		int n;
		cin>>n;
		if(!n)return 0;
		vector<int> s(n);
		ll sum = 0;
		REP(i, n) {
			cin>>s[i];
			sum += s[i];
		}
		sort(ALL(s));
		sum -= s[0];
		sum -= s[n - 1];
		cout<<sum / (n - 2)<<endl;
	}
}
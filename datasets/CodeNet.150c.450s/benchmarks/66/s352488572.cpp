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
	int n;
	cin>>n;
	set<string> s;
	REP(i, n) {
		string buf;
		cin>>buf;
		s.insert(buf);
	}
	int m;
	cin>>m;
	int d = 0;
	REP(i, m) {
		string buf;
		cin>>buf;
		if(s.count(buf) == 0) {
			cout<<"Unknown "<<buf<<endl;
		} else {
			if(d) cout<<"Closed by "<<buf<<endl;
			else cout<<"Opened by "<<buf<<endl;
			d = !d;
		}
	}
}
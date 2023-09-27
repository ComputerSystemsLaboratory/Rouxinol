#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

typedef int _loop_int;
#define REP(i,n) for(_loop_int i=0;i<(_loop_int)(n);++i)
#define FOR(i,a,b) for(_loop_int i=(_loop_int)(a);i<(_loop_int)(b);++i)
#define FORR(i,a,b) for(_loop_int i=(_loop_int)(b)-1;i>=(_loop_int)(a);--i)

#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG2(x,y) cout<<#x<<": "<<x<<" "<<#y<<": "<<y<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define DEBUG_ARR(v,n) cout<<#v<<":";REP(i,n)cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()

const ll MOD = 1000000007ll;
#define FIX(a) ((a)%MOD+MOD)%MOD

class BIT{
public:
	BIT(int _n){
		n = _n;
	}
	void add(int k, int x) {
		for(; k<=n; k += k&-k) bit[k] += x;
	}
	int sum(int k) {
		int res = 0;
		for(; k>0; k -= k&-k) res += bit[k];
		return res;
	}
private:
	int n, bit[1000010];
};

int s, a[200000], b[200000], n;

void compress() {
	sort(b, b + n);
	int t = unique(b, b + n) - b;
	REP(i, n)a[i] = lower_bound(b, b + t, a[i]) - b + 1;
	s = t + 1;
}
int main() {
	cin>>n;
	ll ans = 0;
	REP(i, n) {
		cin>>a[i];
		b[i] = a[i];
	}

	compress();
	BIT bit(n);

	REP(i, n) {
		ans += i - bit.sum(a[i]);
		bit.add(a[i], 1);
	}
	cout<<ans<<endl;
    return 0;
}

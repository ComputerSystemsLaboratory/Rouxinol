#include<bits/stdc++.h>

using namespace std;

#define FOR(i, x, y) for(int i = (x); i < (y); ++i)
#define REP(i, x, y) for(int i = (x); i <= (y); ++i)
#define MP make_pair
#define PB push_back
#define PH push
#define fst first
#define snd second
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;

const int INF = 1e9 + 7;
const int maxn = 205;
const int logn = 62;

int n;
ll a[maxn];
char s[maxn];

class LinearBasis{
public:
	ll val[logn];
	LinearBasis(){ memset(val, 0, sizeof(val)); return; }
	inline void insert(ll x){
		for(int i = logn - 1; i >= 0; --i) if(x >> i & 1){
			if(val[i]) x ^= val[i];
			else{
				val[i] = x;
				break;
			}
		}
		return;
	}
	inline bool query(ll x){
		for(int i = logn - 1; i >= 0; --i) if(x >> i & 1){
			if(!val[i])
				return false;
			x ^= val[i];
		}
		return true;
	}
}lb;

inline void solve(){
	lb = LinearBasis();
	scanf("%d", &n);
	FOR(i, 0, n)
		scanf("%lld", a + i);
	scanf("%s", s);
	for(int i = n - 1; i >= 0; --i){
		if(s[i] == '1'){
			if(!lb.query(a[i])){
				puts("1");
				return;
			}
		}
		else
			lb.insert(a[i]);
	}
	puts("0");
	return;
}

int main(){
	int T;
	for(scanf("%d", &T); T--; solve());
	return 0;
}

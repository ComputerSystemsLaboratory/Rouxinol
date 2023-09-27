#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int (i)=0;i<(n);i++)
#define rrep(i,n) for(int (i)=1;i<=(n);i++)
#define REP(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define MOD 1000000007
#define INF 1e18
#define int long long
#define endl "\n"
#define yorn(f) puts((f)?"Yes":"No")
#define YORN(f) puts((f)?"YES":"NO")
typedef long long ll;
typedef pair<int, int> P;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a/gcd(a,b)*b;};
int mod(int a,int b){return (a+b-1)/b;};
template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T &val){std::fill((T*)array,(T*)(array+N),val);}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;};

int c[26];
int s[365][26];
int t[365];
int last[26];

signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
	
	int D;
	cin >> D;
	rep(i, 26) cin >> c[i];
	rep(i, D) {
		rep(j, 26) cin >> s[i][j];
	}
	int ans = 0;
	rep(i, D) {
		cin >> t[i];
		t[i]--;
		ans += s[i][t[i]];
		last[t[i]] = i + 1;
		rep(j, 26) ans -= c[j] * (i + 1 - last[j]);
		cout << ans << endl;
	}
	return 0;
}
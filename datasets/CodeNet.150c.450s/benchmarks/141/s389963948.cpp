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

double x, y;

bool cross(double a, double b, double c, double d) {
	return (c-a) * (y-b) - (x-a) * (d-b) > 0;
}

signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
	
	double a, b, c, d, e, f;
	while(cin >> a >> b >> c >> d >> e >> f >> x >> y) {
		int cnt = 0;
		cnt += cross(a, b, c, d);
		cnt += cross(c, d, e, f);
		cnt += cross(e, f, a, b);
		if(cnt == 0 || cnt == 3) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

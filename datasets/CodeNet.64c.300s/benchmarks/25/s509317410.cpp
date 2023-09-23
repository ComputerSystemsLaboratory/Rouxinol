#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int (i)=0;i<(n);i++)
#define REP(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define INF LLONG_MAX - 100
#define MOD 1000000007
#define fcout cout << fixed << setprecision(15)
#define int long long
#define yorn(f) puts((f)?"Yes":"No")
#define YORN(f) puts((f)?"YES":"NO")
#define lowb lower_bound
#define upb upper_bound
typedef long long ll;
typedef pair<int, int> P;
typedef priority_queue<int> pque;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a/gcd(a,b)*b;};
int mod(int a,int b){return (a+b-1)/b;};
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T &val){std::fill((T*)array,(T*)(array+N),val);}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;};



signed main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int a[4], b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hit = 0, blow = 0;
		rep(i, 4) {
			if(a[i] == b[i]) hit++;
		}
		rep(i, 4) {
			if(find(a, a + 4, b[i]) != a + 4) blow++;
		}
		cout << hit << " " << blow - hit << endl;
	}
	return 0;
}

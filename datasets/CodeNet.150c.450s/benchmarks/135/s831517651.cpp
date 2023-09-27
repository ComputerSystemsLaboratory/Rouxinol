#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<random>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<unordered_map>
using namespace std;
//---------------------------------------------------
//ライブラリゾーン！！！！
typedef long long ll;
typedef long double ld;
#define str string
#define rep(i,j) for(ll i=0;i<(long long)(j);i++)
const ll Mod = 1000000007;
const ll gosenchou = 5000000000000000;
short gh[2][4] = { { 0,0,-1,1 },{ -1,1,0,0 } };
struct P {
	ll pos, cost;
};
bool operator<(P a, P b) { return a.cost < b.cost; }
bool operator>(P a, P b) { return a.cost > b.cost; }
struct B {//隣接リスト表現
	ll to;
	ld cost;
};
struct E {//辺の情報を入れる変数
	ll from, to, cost;
};
bool operator<(E a, E b) {
	return a.cost < b.cost;
}
struct H {
	ll x, y;
};
bool operator<(H a, H b) {
	/*if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;*/
	return ((a.x + 1)*(a.y + 1)) < ((b.x + 1)*(b.y + 1));
}
bool operator>(H a, H b) {
	if (a.x != b.x) return a.x > b.x;
	return a.y > b.y;
}
bool operator==(H a, H b) {
	return a.x == b.x&&a.y == b.y;
}
bool operator!=(H a, H b) {
	return a.x != b.x || a.y != b.y;
}
ll gcm(ll i, ll j) {//最大公約数
	if (i > j) swap(i, j);
	if (i == 0) return j;
	return gcm(j%i, i);
}
ld rad(H a, H b) {
	return sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
}//rad＝座標上の2点間の距離
ll ari(ll a, ll b, ll c) {
	return (a + b)*c / 2;
}//等差数列の和
bool suf(ld a, ld b, ld c, ld d) {
	if (b <= c || d <= a) return 0;
	return 1;
}//[a,b),[c,d)
ll fact(ll x, ll k, ll p) {//最大値、個数
	ll sum = 1;
	for (int i = 0; i < k; i++) {
		sum *= (x--);
		sum %= p;
	}
	return sum;
}//階乗(正）
ll mod_pow(ll x, ll n, ll p) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res*x%p;
		x = x*x%p;
		n >>= 1;
	}
	return res;
}//x^n%p
 //#define int long long
const long long inf = 4523372036854775807;
const int iinf = 1500000000;
//----------------------------------------------------
//++++++++++++++++++++++++++++++++++++++++++++++++++++
int n, m;
int a[1500],b[1500];
int c[2250000], d[2250000];
signed main() {
	while (cin >> n >> m&&n + m) {
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		for (int i = 1; i < n; i++)
			a[i] += a[i - 1];
		for (int i = 1; i < m; i++)
			b[i] += b[i - 1];
		int k = 0, t = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				c[k++] = a[j] - a[i];
			}
			c[k++] = a[i];
		}
		for (int i = 0; i < m; i++) {
			for (int j = i + 1; j < m; j++) {
				d[t++] = b[j] - b[i];
			}
			d[t++] = b[i];
		}
		sort(c, c + k);
		sort(d, d + t);
		int ans = 0;
		for (int i = 0; i < k; i++) {
			ans += upper_bound(d, d + t, c[i]) - lower_bound(d, d + t, c[i]);
		}
		cout << ans << endl;
	}
	getchar(); getchar();
}

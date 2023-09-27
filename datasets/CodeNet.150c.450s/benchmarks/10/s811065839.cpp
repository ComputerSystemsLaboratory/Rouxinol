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
#include<stack>
#include<cstdio>
#include<bitset>
#include<unordered_map>
#include <climits>
#include<fstream>
using namespace std;
//---------------------------------------------------
//ライブラリゾーン！！！！
typedef long long ll;
typedef long double ld;
#define rep(i,j) for(ll i=0;i<(long long)(j);i++)
#define all(a) (a).begin(),(a).end()
const ll Mod = 1000000007;
struct P {
	ll pos, cost;
};
bool operator<(P a, P b) { return a.cost < b.cost; }
bool operator>(P a, P b) { return a.cost > b.cost; }
struct B {//隣接リスト表現
	ll to, cost;
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
	if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;
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
ll mod_pow(ll x, ll n, ll p) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res * x%p;
		x = x * x%p;
		n >>= 1;
	}
	return res;
}//x^n%p
const ll Inf = 3023372036854775807;
const int inf = 1500000000;
#define int long long
//----------------------------------------------------
//++++++++++++++++++++++++++++++++++++++++++++++++++++
int a[4][3][10];
int n;
int b, f, r, v;
signed main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		b--; f--; r--;
		a[b][f][r] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int z = 0; z < 10; z++) {
				cout << " " << a[i][j][z];
			}
			cout << endl;
		}
		if (i < 3) {
			for (int i = 0; i < 20; i++)
				cout << "#";
			cout << endl;
		}
	}
}

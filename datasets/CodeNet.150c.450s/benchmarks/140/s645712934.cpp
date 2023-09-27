#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<map>
#include<string.h>
#include<complex>
#include<math.h>
#include<queue>
#include <functional>
#include<time.h>
#include<iomanip>
#include<cassert>
#include<bitset>
#include<sstream>
using namespace std;
typedef long long int llint;
typedef pair<int, int> pint;
typedef pair<llint, llint> pllint;
typedef vector<int> vint;
typedef vector<llint> vllint;
typedef vector<pint> vpint;
typedef vector<string> vstring;
typedef vector<pair<llint, llint>> vpllint;
typedef vector<vector<int>> vvint;
typedef vector<vector<llint>> vvllint;
typedef vector<vector<pint>> vvpint;
typedef vector<bool> vbool;
typedef vector<vbool> vvbool;
typedef vector<vpllint> vvpllint;
#define rep(i,n) for(int i=0;i<n;i++)
#define drep(i,n) for(int i=n-1;0<=i;i--)
#define yes(ans) if(ans)cout<<"yes"<<endl;else cout<<"no"<<endl;
#define Yes(ans) if(ans)cout<<"Yes"<<endl;else cout<<"No"<<endl;
#define YES(ans) if(ans)cout<<"YES"<<endl;else cout<<"NO"<<endl;
#define POSSIBLE(ans) if(ans)cout<<"POSSIBLE"<<endl;else cout<<"IMPOSSIBLE"<<endl;
#define Pi 3.1415926535897932384626
#define mod llint(1e9+7)
#define Inf 2147483647
#define llInf 9223372036854775807
#define all(x) x.begin(),x.end()
#define pb push_back
#define isin(n,i) 0<=i&&i<n

class UnionFind {
public:
	//親の番号を格納する。親だった場合は-(その集合のサイズ)
	vector<int> Parent;

	//作るときはParentの値を全て-1にする
	//こうすると全てバラバラになる
	UnionFind(int N) {
		Parent = vector<int>(N, -1);
	}

	//Aがどのグループに属しているか調べる
	int root(int A) {
		if (Parent[A] < 0) return A;
		return Parent[A] = root(Parent[A]);
	}

	//自分のいるグループの頂点数を調べる
	int size(int A) {
		return -Parent[root(A)];//親をとってきたい
	}

	//AとBをくっ付ける
	bool connect(int A, int B) {
		//AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
		A = root(A);
		B = root(B);
		if (A == B) {
			//すでにくっついてるからくっ付けない
			return false;
		}

		//大きい方(A)に小さいほう(B)をくっ付けたい
		//大小が逆だったらひっくり返しちゃう。
		if (size(A) < size(B)) swap(A, B);

		//Aのサイズを更新する
		Parent[A] += Parent[B];
		//Bの親をAに変更する
		Parent[B] = A;

		return true;
	}
};

//セグ木・0-indexed・非再帰・(大きさ・単位元・関数)で初期化
template<typename T>
struct SegTree {
	//比較関数の型
	using F = function<T(T, T)>;
	//二分木を配列で表したもの
	vector<T>seg;
	//木の半分の大きさ
	int siz;
	//単位元
	const T unit;
	//比較する関数
	const F f;

	//大きさn、unit(単位元)、f(モノイド)でsegtreeを初期化する
	SegTree(int n, const T unit, const F f) : unit(unit), f(f) {
		siz = 1;
		while (siz < n)siz <<= 1;
		seg.assign(siz * 2 - 1, unit);
		siz--;
	}

	//k番目にtを入力
	void set(int k, const T& t) {
		seg[k + siz] = t;
	}

	//fによって木を構築する
	void build() {
		for (int i = siz - 1; 0 <= i; i--) {
			seg[i] = f(seg[i * 2 + 1], seg[i * 2 + 2]);
		}
	}

	T operator[](const int i) {
		return seg[i + siz];
	}

	//k番目をxに更新する
	void update(int k, T x) {
		k += siz;
		seg[k] = x;
		while (0 < k) {
			k = (k - 1) >> 1;
			seg[k] = f(seg[k * 2 + 1], seg[k * 2 + 2]);
		}
	}

	//[a,b)について、fした結果を返す
	//半開区域のためa以上b未満の位置を指す
	T query(int a, int b) {
		T l = unit, r = unit;
		for (a += siz, b += siz; a < b; a >>= 1, b >>= 1) {
			if (!(a & 1))l = f(seg[a++], l);
			if (!(b & 1))r = f(seg[--b], r);
		}
		return f(l, r);
	}
};

//aとbの最大公約数を求めるよ
long long GCD(long long a, long long b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

// 返り値: a と b の最大公約数
// ax + by = gcd(a, b) を満たす (x, y) が格納される
long long extGCD(long long a, long long b, long long& x, long long& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	long long d = extGCD(b, a % b, y, x);
	y -= a / b * x;
	return d;
}

// mod. m での a の逆元 a^{-1} を計算する
long long modinv(long long a, long long m) {
	long long b = m, u = 1, v = 0;
	while (b) {
		long long t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}

//nCrをmで割った余りを求める
llint nCr(llint n, llint r, llint m) {
	llint ans = 1;
	for (llint i = 0; i < r; i++) {
		ans *= n - i;
		ans %= m;
	}
	for (llint i = 1; i <= r; i++) {
		ans *= modinv(i, m);
		ans %= m;
	}
	return ans;
}

//aのb乗をmで割った余りを求める
llint power(llint a, llint b, llint m) {
	if (b == 1)return a;
	if (b == 0)return 1;
	llint tmp = power(a, (llint)b / 2, m);
	tmp *= tmp;
	tmp %= m;
	if (b % 2 == 1) {
		tmp *= a;
		tmp %= m;
	}
	return tmp;
}

//bitを表すsub,要素数を表すlength
bool next_combination(llint& sub, int length) {
	llint x = sub & -sub, y = sub + x;
	sub = (((sub & ~y) / x) >> 1) | y;
	return sub < (llint)(1 << (llint)length);
}

void Zalgorithm(string& s, vint& a) {
	a[0] = s.size();
	int i = 1, j = 0;
	while (i < s.size()) {
		while (i + j < s.size() && s[j] == s[i + j])j++;
		a[i] = j;
		if (j == 0) { i++; continue; }
		int k = 1;
		while (i + k < s.size() && a[k] + k < j) {
			a[i + k] += a[k]; k++;
		}
		i += k; j -= k;
	}
	return;
}

int main() {
	int v, e;
	cin >> v >> e;
	vvpint g(v);
	rep(i, e) {
		int s, t, w;
		cin >> s >> t >> w;
		g[s].pb({ t,w });
		g[t].pb({ s,w });
	}
	int ans = 0;
	vbool visited(v, false);
	visited[0] = true;
	priority_queue<pint,vpint,greater<pint>>que;
	for (auto i : g[0]) {
		que.push({ i.second,i.first });
	}
	int cnt = 1;
	while (cnt < v) {
		auto now = que.top(); que.pop();
		if (visited[now.second])continue;
		visited[now.second] = true;
		ans += now.first;
		cnt++;
		for (auto next : g[now.second]) {
			que.push({ next.second,next.first });
		}
	}
	cout << ans << endl;
	return 0;
}

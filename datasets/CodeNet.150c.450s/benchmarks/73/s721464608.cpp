#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
//const int INF = 1e8;
using namespace std;

//struct Monoid{
//	using T = _underlying_set_; //モノイドの台集合の型
//	T operator()(const T &a, const T &b) { return _a_op_b_; } //二項演算
//	static constexpr T identity() { return _identity_element_; } //単位元
//};


struct RMQ{
	using T = int; //モノイドの台集合の型
	T operator()(const T &a, const T &b) { return min(a,b); } //二項演算
	static constexpr T identity() { return INT_MAX; } //単位元
};

struct RSQ{
	using T = int; //モノイドの台集合の型
	T operator()(const T &a, const T &b) { return a + b; } //二項演算
	static constexpr T identity() { return 0; } //単位元
};

template<class Monoid>
class SegTree{ //SegTree<Monoid> seg(n);
	private:
		using T = typename Monoid::T; //台集合の型をエイリアス
		Monoid op; //演算の関数オブジェクト
		const int n; //列の長さ
		vector<T> t; //内部二分木

		void prop_to(int i) { //ノードiに伝搬
			t[i] = op(t[2 * i], t[2 * i + 1]);
		}

	public:
		SegTree(int n) : n(n), t(4 * n, op.identity()) {} //単位元で埋める初期化
		SegTree(const vector<T> &v) : n(v.size()), t(2 * n){ //配列を用いて初期化
			copy(begin(v), end(v), begin(t) + n);
			for(int i = n - 1; i > -0; i--) prop_to(i);
		}

		void set(int i, const T &x){
			t[i += n] = x; 
			while(i >>= 1) prop_to(i);
		}

		void add(int i, const T &x){
			set(i, get(i) + x);
		}

		T get(int i) { return t[i + n]; } //列のi番目を返す

		T query(int l, int r){ // 1-index
			T accl = op.identity(), accr = op.identity();
			for(l += n, r += n; l < r; l >>= 1, r >>= 1){
				if(l & 1) accl = op(accl, t[l++]);
				if(r & 1) accr = op(t[r-1], accr);
			}
			return op(accl, accr);
		}
};

int main(){
	int n, q;
	cin >> n >> q;

	SegTree<RSQ> seg(n);
	rep(i,q){
		int com;
		cin >> com;
		if(com){
			int l, r;
			cin >> l >> r;
			cout << seg.query(l + 1,r + 2) << endl;
		}else{
			int p, x;
			cin >> p >> x;
			seg.add(p + 1,x);
		}
	}
}


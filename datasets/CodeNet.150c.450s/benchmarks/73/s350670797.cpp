#include"bits/stdc++.h"
using namespace std;

//RSQ
struct SegmentTree{
private:
	int N;
	vector<long long> node, lazy;
	vector<bool> lazyFlg;
	const long long DEFAULT = 0LL;
public:
	void init(int n){ //初期化 O(N)
		node.clear();
		lazy.clear();
		lazyFlg.clear();
		N = 1;
		while(N < n) N = (N<<1);
		for(int i=0; i<2*N-1; i++){
			node.push_back(DEFAULT);
			lazy.push_back(0LL);
			lazyFlg.push_back(false);
		}
	}
	void eval(int k, int l, int r){ //遅延評価 O(1)
		if(lazyFlg[k]){ //RUQ：下に更新クエリが溜まっていても加算クエリが溜まっていても上書き
			node[k] = lazy[k];
			if(r-l > 1){
				lazy[2*k+1] = lazy[k] / 2;
				lazyFlg[2*k+1] = true;
				lazy[2*k+2] = lazy[k] / 2;
				lazyFlg[2*k+2] = true;
			}
			lazy[k] = 0LL;
			lazyFlg[k] = false;
		}
		else{ //RAQ：下に更新クエリが溜まっていても加算クエリが溜まっていても加算
			node[k] += lazy[k];
			if(r-l > 1){
				lazy[2*k+1] += lazy[k] / 2;
				lazy[2*k+2] += lazy[k] / 2;
			}
			lazy[k] = 0LL;
		}
	}
	void update(int a, long long x){ //[a,a+1)の値を変更 O(log N)
		update(a, a+1, x);
	}
	void update(int a, int b, long long x, int k=0, int l=0, int r=-1){ //[a,b)の値を変更 O(log N)
		if(r == -1) r = N;
		eval(k, l, r);
		if(b <= l || r <= a) return; //交差する場合
		if(a <= l && r <= b){ //完全に含む場合
			lazy[k] = x * (r-l);
			lazyFlg[k] = true;
			eval(k, l, r);
		}
		else{
			update(a, b, x, 2*k+1, l, (l+r)/2);
			update(a, b, x, 2*k+2, (l+r)/2, r);
			node[k] = node[2*k+1] + node[2*k+2];
		}
	}
	void add(int a, long long x){ //[a,a+1)の値に加算 O(log N)
		add(a, a+1, x);
	}
	void add(int a, int b, long long x, int k=0, int l=0, int r=-1){ //[a,b)の値に加算 O(log N)
		if(r == -1) r = N;
		eval(k, l, r);
		if(b <= l || r <= a) return; //交差する場合
		if(a <= l && r <= b){ //完全に含む場合
			lazy[k] += x * (r-l);
			eval(k, l, r);
		}
		else{
			add(a, b, x, 2*k+1, l, (l+r)/2);
			add(a, b, x, 2*k+2, (l+r)/2, r);
			node[k] = node[2*k+1] + node[2*k+2];
		}
	}
	long long sum(int a, int b, int k=0, int l=0, int r=-1){ //[a,b)の和 O(log N)
		if(r == -1) r = N;
		if(b <= l || r <= a) return DEFAULT; //交差する場合
		eval(k, l, r);
		if(a <= l && r <= b) return node[k]; //完全に含む場合
		return sum(a, b, k*2+1, l, (l+r)/2) + sum(a, b, k*2+2, (l+r)/2, r);
	}
};

int main(){
	int N, Q;
	cin >> N >> Q;
	SegmentTree st;
	st.init(N+1);
	for(int q=0; q<Q; q++){
		int c, x, y;
		cin >> c >> x >> y;
		if(c == 0) st.add(x, y);
		else cout << st.sum(x, y+1) << endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

struct sqrt_decomposition{
	using F = function<int(int, int)>;
	int n, sz, len;
	vector<int> v;
	vector<int> w;
	F f;
	int e;
	sqrt_decomposition(vector<int> _v, F _f, int _e): v(_v), f(_f), e(_e){
		n = v.size();
		sz = 1;
		while((sz+1) * (sz+1) < n) ++sz;
		len = n / sz;
		w.resize(len, e);
		for(int i=0; i<sz; ++i)
			for(int j=0; j<sz; ++j)
				if(i*sz + j < n)
					w[i] = f(w[i], v[i*sz + j]);
	}
	void point_set(int a, int x){
		v[a] = x;
		int b = a / sz;
		w[b] = e;
		for(int i=0; i<sz&&b*sz+i<n; ++i)
			w[b] = f(w[b], v[b*sz+i]);
	}
/*	void range_set(int a, int b, int x){
		while(a < b && a % sqrt_n != 0){
			v[a] = x;
			++a;
		}
		while(a + sqrt_n <= b){
			w[a / sqrt_n] = x;
			a += sqrt_n;
		}
		while(a < b){
			v[a] = x;
			++a;
		}
	}
*/	void point_operate(int a, int x){
		v[a] = f(v[a], x);
		int b = a / sz;
		w[b] = e;
		for(int i=0; i<sz&&b*sz+i<n; ++i)
			w[b] = f(w[b], v[b*sz+i]);
	}
/*	void range_operate(int a, int b, int x){

	}
*/	int point_get(int a){
		int b = a / sz;
		return f(w[b], v[a]);
	}
	int range_get(int a, int b){
		int res = e;
		while(a < b && a % sz != 0){
			res = f(res, v[a]);
			++a;
		}
		while(a + sz <= b){
			res = f(res, w[a / sz]);
			a += sz;
		}
		while(a < b){
			res = f(res, v[a]);
			++a;
		}
		return res;
	}
};

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	sqrt_decomposition sd(vector<int>(n, 0), [](int x, int y){return x+y;}, 0);
	while(q--){
		int c, x, y;
		cin >> c >> x >> y;
		if(c == 0){
			sd.point_operate(x-1, y);
		}else{
			cout << sd.range_get(x-1, y) << "\n";
		}
	}
//	for(int i=0; i<n; ++i)
//		cout << i << " " << sd.v[i] << "\n";
//	for(int i=0; i<n/sd.sz; ++i)
//		cout << i << " " << sd.w[i] << "\n";
}

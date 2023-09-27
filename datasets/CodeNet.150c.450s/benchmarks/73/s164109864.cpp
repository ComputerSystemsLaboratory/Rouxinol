#include <bits/stdc++.h>
using namespace std;

class SegTree{
	public:
		int N;
		vector<long long> Dat;
		SegTree(int n){
			if((n & (n - 1)) == 0) N = n;
			else{
				N = 1;
				while(n > 0){
					N <<= 1;
					n >>= 1;
				}
			}
			Dat.resize(2 * N - 1, 0);
		}

		void update(int i, int x){ // a[i] <- x
			i += N - 1;
			Dat[i] += x;
			while(i > 0){
				i = (i - 1) / 2;
				Dat[i] = Dat[i * 2 + 1] + Dat[i * 2 + 2];
			}
		}

		long long find(int a, int b, int k, int l, int r){ // return sum of [a, b) in node k, usage : st.find(x, y+1, 0, 0, st.N-1);
			if(r < a || b <= l) return 0;
			if(a <= l && r < b) return Dat[k];
			long long vl = find(a, b, k * 2 + 1, l, (l + r) / 2);
			long long vr = find(a, b, k * 2 + 2, 1 + (l + r) / 2, r);
			return vl + vr;
		}
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	SegTree st(n);
	while(q--){
		int c, x, y;
		cin >> c >> x >> y;
		if(c == 0) st.update(x-1, y);
		else cout << st.find(x-1, y, 0, 0, st.N-1) << "\n";
/*		for(int i=0; i<n; ++i)
			cout << st.Dat[i+st.N-1] << "\t";
		cout << "\n";
*/	}
}

#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long ll;
typedef vector<ll> V;
typedef vector<V> M;

M mul(const M& a, const M& b){
	int n = a.size(), m = b.size(), l = b[0].size();
	M c(n, V(l, 0));
	rep(i, n){
		rep(k, l){
			rep(j, m){
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}
	return c;
}

M read(int n, int m){
	M x(n, V(m, 0));
	rep(i, n){
		rep(j, m){
			cin >> x[i][j];
		}
	}
	return x;
}

void print(const M& x){
	int n = x.size(), m = x[0].size();
	rep(i, n){
		rep(j, m){
			cout << x[i][j] << (j == m - 1 ? '\n' : ' ');
		}
	}
}

int n, m, l;

int main(){
	cin >> n >> m >> l;
	M a = read(n, m);
	M b = read(m, l);

	M c = mul(a, b);
	print(c);
	return 0;
}
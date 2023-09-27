#include <iostream>
#include <vector>
using namespace std;

using vec = vector<int64_t>;
using mat = vector<vec>;

mat mul(mat &a, mat &b){
	mat c(a.size(), vec(b[0].size()));
	for(int k = 0; k < b.size(); k++){
		for(int i = 0; i < a.size(); i++){
			for(int j = 0; j < b[0].size(); j++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return c;
}

int main(){
	int n, m, l;
	cin >> n >> m >> l;
	mat a(n, vec(m)), b(m, vec(l));
	for(auto &aa:a) for(auto &aaa:aa) cin >> aaa;
	for(auto &bb:b) for(auto &bbb:bb) cin >> bbb;
	mat c = mul(a, b);
	for(int i = 0; i < c.size(); i++){
		for(int j = 0; j < c[i].size(); j++){
			if(j) cout << ' ';
			cout << c[i][j];
		}
		cout << endl;
	}
}
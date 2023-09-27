#include <bits/stdc++.h>
using namespace std;

struct BIT{
    int N;
    vector<int> dat;
    BIT() {}
    BIT(int n) {
		N = n;
		dat.resize(N + 1);
    }
    // update k th element (0-index)
	void add(int k, int x){
        k++;
		while(k <= N){
			dat[k] += x;
			k += k&-k;
		}
	}
	// sum [0, k) (0-index)
	int sum(int k){
		int s = 0;
		while(k > 0){
			s += dat[k];
			k -= k&-k;
		}
		return s;
	}
	// sum [a, b) (0-index)
	int query(int a, int b){
		return sum(b) - sum(a);
	}
};

int main(){
    int n, q;
    cin >> n >> q;
    BIT b(n);
    for(int i = 0; i < q; i++){
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0){
            x--;
            b.add(x, y);
        }else if(com == 1){
            x--; y--;
            // cout << b.sum(y + 1) << ' ' << b.sum(x) << endl;
            cout << b.query(x, y + 1) << endl;
        }
    }
}

/* verified
https://onlinejudge.u-aizu.ac.jp/#/courses/library/3/DSL/all/DSL_2_B
*/

#include <vector>
#include <iostream>
#include <valarray>
#include <string>
#include <algorithm>
#include <set>
typedef unsigned long long ull;
typedef long long ll;
#define fst first
#define snd second
#define rep(i,n) for(ull i = 0;i<(n);i++)
#define rep1(i,n) for(ull i = 1;i<=(n);i++)
#define revrep(i,n) for(ull i = (n-1);i>=0;i--)
#define all(n) (n).begin(),(n).end()
#define show(x) cout << "debug " << #x << ":" << x << endl;
#define showvec(x) cout << endl << "debug " << #x << ";" << endl; \
    for(ull __i = 0;__i < x.size();__i++){ \
        for(ull __j = 0;__j<x[0].size();__j++){ \
            cout << x[__i][__j] << " "; \
        } \
        cout << endl; \
    } \
    cout << endl;
using namespace std;

int BIT[1000010], bit_size;
void bit_init(int n){
	rep(i,n){
		BIT[i] = 0;
	}
	bit_size = n;
}

int bit_sum(int n){
	int ans = 0;
	while(n > 0){
		ans += BIT[n];
		n &= n-1;
	}
	return ans;
}

void bit_add(int n, int v){
	while(n <= bit_size){
		BIT[n] += v;
		n += n & (-n);
	}
}

int N,Q;

int main(){
	cin >> N >> Q;
	bit_init(N);
	rep(_q,Q){
		int com,x,y;
		cin >> com >> x >> y;
		if(com == 1){
			int l,r;
			if(x == 0){
				l = 0;
			}else{
				l = bit_sum(x-1);
			}
			r = bit_sum(y);
			cout << r - l << endl;
		}else{
			bit_add(x,y);
		}
	}
}
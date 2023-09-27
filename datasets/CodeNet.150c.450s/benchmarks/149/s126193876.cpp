#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
const int INF = 1e9;

int n, q;
const int SIZE = 10010;
class Unionfind{
    public:
        int par[SIZE], cnt[SIZE];
        void init(int n){
        	for (int i = 0; i < n; ++i){
        		par[i] = i;
        		cnt[i] = 1;
        	}
        }
        int find(int x){
        	if(par[x] == x) return x;
        	return par[x] = find(par[x]);
        }
        void unite(int x, int y){
        	x = find(x);
        	y = find(y);
        	if(x == y) return;
        	if(cnt[x] < cnt[y]) swap(x, y);
        	par[y] = x;
        	cnt[x] += cnt[y];
        }
        bool same(int x, int y){
        	return find(x) == find(y);
        }
        int get(int x, int y){
        	if(same(x, y)){
        		return cnt[x];
        	}else{
        		return cnt[x] + cnt[y];
        	}
        }
};


int main(void){
	int n, q; cin >> n >> q;
	Unionfind uf;
	uf.init(n + 1);

	rep(i, q){
		int com, x, y;
		cin >> com >> x >> y;
		if(com == 0){
			uf.unite(x, y);
		}else{
			if(uf.same(x, y)){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}
	}

	return 0;
}
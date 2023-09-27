#include <bits/stdc++.h>
using namespace std;
 
#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define print(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define print(x)
#endif
 
const int inf=1e9;
const int64_t inf64=1e18;
const double eps=1e-9;
 
template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}
 
using i64=int64_t;

class quick_find_weighted{
	public:
	int size=0;
	vector<int> belong;
	vector<set<int>> groups;
	quick_find_weighted(int size_):size(size_),belong(size_),groups(size_){
		for(int i=0; i<size; ++i){
			belong[i]=i;
			groups[i].insert(i);
		}
	}
	void unite(int x,int y){
		int gx=belong[x],gy=belong[y];
		if(gx==gy) return;
		if(groups[gx].size()<groups[gy].size()) swap(gx,gy);
		for(int z:groups[gy]) belong[z]=gx;
		groups[gx].insert(groups[gy].begin(),groups[gy].end());
		groups[gy].clear();
	}
	int find(int x)const{
		return belong[x];
	}
    bool is_same_group(int x,int y)const{
        return find(x)==find(y);   
    }
	void erase(int x){
		int gx=belong[x];
		if(gx==-1) return;
		belong[x]=-1;
		groups[gx].erase(x);
	}
};
 
void solve(){
    int n,q;
    cin >> n >> q;
    quick_find_weighted ds(n);
    rep(i,0,q){
        int com,x,y;
        cin >> com >> x >> y;
        if(com==0) ds.unite(x,y);
        else cout << int(ds.is_same_group(x,y)) << endl;
    }
}
 
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(10);
    solve();
    return 0;
}
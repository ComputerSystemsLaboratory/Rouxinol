#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define show(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define show(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
template<typename T> using vec=std::vector<T>;

const int inf=1<<30;
const long long int infll=1LL<<62;
const double eps=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}

class union_find{
	private:
	vector<int> parent,rank;
	int size;
	public:
    int cnt;

    union_find()=default;
    union_find(int n){ init(n); }

    void init(int n){
		size=n;
		cnt=n;
		parent.resize(size);
		rank.resize(size);
		for(int i=0; i<size; ++i){
			parent[i]=i;
			rank[i]=0;
		}
	}

	int find(int x){
		if(parent[x]==x) return x;
		else return parent[x]=find(parent[x]);
	}

	void unite(int x,int y){
		x=find(x);
		y=find(y);
		if(x==y) return;
		if(rank[x]<rank[y]){
			parent[x]=y;
		} else {
			parent[y]=x;
			if(rank[x]==rank[y]) ++rank[x];
		}
		--cnt;
	}

	bool is_same(int x,int y){
		return find(x)==find(y);
	}
};

void solve(){
    int n;
    cin >> n;
    union_find uf(n);
    int  q;
    cin >> q;
    rep(i,0,q){
        int com,x,y;
        cin >> com >> x >> y;
        if(com==0) uf.unite(x,y);
        if(com==1){
            if(uf.is_same(x,y)) cout << 1 << endl;
            else cout << 0 << endl;
        }
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
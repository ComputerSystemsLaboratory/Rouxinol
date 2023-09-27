#include<bits/stdc++.h>

// Shrotening
#define fst first
#define snd second
#define pb push_back

// Loop
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define RFOR(i,a,b) for(long i=(a);i>=(b);--i)

#define REP(i,a) for(long i=0;i<(a);++i)
#define RREP(i,a) for(long i=(a);i>=0;--i)

#define EACH(i,a) for(auto (i)=(a).begin(),_END=(a).end();i!=_END;++i)
#define REACH(i,a) for(auto (i)=(a).rbegin(),_END=(a).rend();i!=_END;++i)

//Algorithm
#define ALL(a) (a).begin(), a.end()
#define RALL(a) (a).rbegin(), a.rend()
#define EXIST(a,x) ((a).find(x)!=(a).end())
#define SORT(a) std::sort((a).begin(), (a).end())
#define UNIQUE(a) std::sort((a).begin(), a.end()), a.erase(std::unique((a).begin(), a.end()), a.end());
#define SUM(a) std::accumulate((a).begin(), (a).end(), 0);

//Setting
#define OPT std::cin.tie(0);std::ios::sync_with_stdio(false);

//debug message
bool debug = true;
#define MSG(s)   if(debug){std::cout << s << std::endl;}
#define DEBUG(x) if(debug){std::cout << "debug(" << #x << "): " << x << std::endl;}

//alias
typedef long long LL;
typedef std::vector<char> VC;
typedef std::vector<int>  VI;
typedef std::vector<long> VL;
typedef std::vector<long long> VLL;

typedef std::vector< VC > VC2;
typedef std::vector< VI > VI2;
typedef std::vector< VL > VL2;
typedef std::vector< VLL > VLL2;

typedef std::pair<int,int> PII;

template<class T>
struct SegTree {
    // tree: data structure
    // INF: initilize value
    // f: update function(old, new)
    // g: get function(child1, child2)

    T INF;
    size_t N;
    std::vector<T> tree;

    std::function<T(T,T)> F;
    std::function<T(T,T)> G;

    SegTree(size_t size, T inf, std::function<T(T,T)> f, std::function<T(T,T)> g) {
        INF = inf;
        F = f;
        G = g;

        N = 1;
        while( N < size ) {
            N <<= 1;
        }
        tree.resize(2*N-1, INF);
    }

    void update(int i, int x) {
        i += N - 1;
        tree[i] = F(tree[i], x);
        while(i > 0) {
            i = (i-1)/2;
            tree[i] = G(tree[i*2+1],tree[i*2+2]);
        }
    }

    T query(size_t a, size_t b) {
        auto x = query(a, b, 0, 0, N);
        return x;
    }
    T query(size_t a, size_t b, size_t k, size_t l, size_t r) {
        if( r <= a || b <= l ) {
            return INF;
        }
        if( a <= l && r <= b ) {
            return tree[k];
        } else {
            T vl = query(a, b, k*2+1, l, (l+r)/2);
            T vr = query(a, b, k*2+2, (l+r)/2, r);
            return G(vl, vr);
        }
    }

    void debug() {
        std::cout << "------" << std::endl;
        std::cout << tree[0] << std::endl;
        size_t r = 0;
        while(r < N-1) {
            size_t ch = r*2+2;
            FOR(i, r+1, ch+1) {
                if(i != r+1) std::cout << " ";
                std::cout << tree[i];
            }
            std::cout << std::endl;
            r = ch;
        }
        std::cout << "------" << std::endl;
    }
};

int N, Q;
int main() {
    std::cin >> N >> Q;
    SegTree<int> st = SegTree<int>(N,
                                   0,
                                   [](int a, int b){return a+b;}, 
                                   [](int a, int b){return a+b;});
                                   
    REP(i, Q) {
        int c, x, y;
        std::cin >> c >> x >> y;
        if(c == 0) {
            st.update(x-1, y);
        } else {
            std::cout << st.query(x-1, y) << std::endl;
        }
    }
}
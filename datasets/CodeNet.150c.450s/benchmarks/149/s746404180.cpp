// clang-format off
#include <bits/stdc++.h>

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep(i, n) for(int i = (n)-1; i >= 0; i--)

#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define show(x) cout << #x << " = " << x << endl
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
#define pii pair<int, int>
#define vi vector<int>

using namespace std;
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T>& p){return o<<"("<<p.first<<","<<p.second<<")";}
template<class T> ostream& operator<<(ostream& o,const vector<T>& vc){o<<"sz = "<<vc.size()<<endl<<"[";for(const T& v:vc) o<<v<<",";o<<"]";return o;}
using ll = long long;
constexpr ll MOD = 1000000007;


constexpr std::size_t N_MAX = 10000;

class UnionFindTree
{
public:
    UnionFindTree()
    {
        for (std::size_t i = 0; i < N_MAX; i++) {
            parent[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
    }

    bool same(const std::size_t a, const std::size_t b)
    {
        return find(a) == find(b);
    }

    std::size_t find(const std::size_t a)
    {
        if (parent[a] == a) {
            return a;
        } else {
            return parent[a] = find(parent[a]);
        }
    }

    void unite(const std::size_t a_, const std::size_t b_)
    {
        const std::size_t a = find(a_);
        const std::size_t b = find(b_);
        if (a == b) {
            return;
        }
        if (rank[a] > rank[b]) {
            parent[b] = a;
            size[a] += size[b];
        } else {
            parent[a] = b;
            size[b] += size[a];
        }
        if (rank[a] == rank[b]) {
            rank[b]++;
        }
    }

    std::size_t getSize(const std::size_t a)
    {
        return size[a];
    }

private:
    std::size_t parent[N_MAX];
    std::size_t rank[N_MAX];
    std::size_t size[N_MAX];
};


int main()
{
    int n, q;
    cin >> n>> q;
    UnionFindTree u;
    rep(i, q){
        int c;
        cin >> c;
        int x, y;
        cin >> x >> y;
        if(c == 0){
            u.unite(x, y);
        } else if (c == 1){
            if(u.same(x, y)){
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
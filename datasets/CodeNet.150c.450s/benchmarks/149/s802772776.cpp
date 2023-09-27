#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF = 1e9;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

class UnionFind {
public:
    vector<int> par, union_size;
    vector<set<int>> group; // group[i] := ???i?????????????±???????????´?????????§
    
    UnionFind(int n) : par(n), union_size(n, 1), group(n)
    {
        for (int i=0; i<n; i++) {
            par[i] = i;
            group[i].insert(i);
        }
    }
    
    // ??¨??????????±???????
    int find(int x)
    {
        return (par[x] == x ? x : par[x] = find(par[x]));
    }
    
    // x??¨y????±????????????????????????????
    void merge(int x, int y)
    {
        x = find(x), y = find(y);
        if (x == y) return;
        if (union_size[x] < union_size[y]) swap(x, y);

        union_size[x] += union_size[y];
        union_size[y] = union_size[x];

        par[y] = x;
        group[x].insert(group[y].begin(), group[y].end());
        group[y] = set<int>();
    }
    
    bool is_same(int x, int y) { return find(x) == find(y); }
};

int main()
{
    ios::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;

    UnionFind UF(N);
    rep(i, Q) {
        int C, X, Y;
        cin >> C >> X >> Y;

        if (C == 0) {
            UF.merge(X, Y);
        } else {
            cout << UF.is_same(X, Y) << endl;
        }
    }
}
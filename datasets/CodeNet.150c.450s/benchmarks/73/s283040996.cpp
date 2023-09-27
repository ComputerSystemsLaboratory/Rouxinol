#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef pair<ll, P> P3;
typedef pair<P ,P> PP;
const ll MOD = ll(1e9)+7;
const int IINF = INT_MAX;
const ll LLINF = LLONG_MAX;
const int MAX_N = int(1e5 + 5);
const double EPS = 1e-6;
const int di[] = {0, 1, 0, -1}, dj[] = {1, 0, -1, 0};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define ALL(v) (v).begin(), (v).end()

template <typename Monoid>
struct SegmentTree{
private:
    int N;
    vector<Monoid> node;
    using F = function<Monoid(Monoid, Monoid)>;
    F f;
    Monoid e;

public:
    SegmentTree(){}
    SegmentTree(F f, Monoid e):f(f), e(e){}
    void init(int sz){
        N = 1;
        while(N < sz) N <<= 1;
        node.assign(2*N-1,e);
    }
    void build(vector<Monoid>& v){
        int sz = int(v.size());
        init(sz);
        for(int i=N-1; i<(N<<1); i++){
            node[i] = v[i];
        }
        for(int i=N-2; i>=0; i--){
            node[i] = f(node[i*2+1], node[i*2+2]);
        }
    }
    void add_val(int k, Monoid x){
        k += N-1;
        node[k] += x;
        while(k > 0){
            k = (k-1)/2;
            node[k] = f(node[2*k+1], node[2*k+2]);
        }
    }
    // [a,b)
    Monoid query(int a, int b){return query(a, b, 0, 0, N);}
    Monoid query(int a, int b, int k, int l, int r){
        if(b <= l || r <= a) return e;
        if(a <= l && r <= b) return node[k];
        Monoid vl, vr;
        vl = query(a, b, 2*k+1, l, (l+r)/2);
        vr = query(a, b, 2*k+2, (l+r)/2, r);
        return f(vl, vr);
    }
};



int main() {
    auto f = [=](ll a, ll b){return a + b;};
    SegmentTree<ll> seg(f,0LL);

    int n, q;
    cin >> n >> q;
    seg.init(n);
    for(int i=0; i<q; i++){
        int c, x, y;
        cin >> c >> x >> y;
        if(c){
            cout << seg.query(x-1, y) << endl;
        }
        else{
            seg.add_val(x-1, y);
        }
    }
    return 0;
}


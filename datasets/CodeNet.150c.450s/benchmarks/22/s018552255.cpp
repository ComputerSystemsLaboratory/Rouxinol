#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; (i) < (n); (i)++)
using namespace std;

long modpow(long a, long n, long mod) {
    long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

// a^{-1} mod を計算する
long modinv(long a, long mod) {
    return modpow(a, mod - 2, mod);
}

struct compare1 { 
    bool operator()(const pair<long, long>& value,  
                                const long& key) 
    { 
        return (value.first < key); 
    } 
    bool operator()(const long& key,  
                    const pair<long, long>& value) 
    { 
        return (key < value.first); 
    } 
};

struct RMQ {
    vector<int> a;
    int inf = 2000000000; // 2*10^9
    int n = 1;

    RMQ(int n_ = 1){
        init(n_);
    }

    void init(int n_ = 1){
        while(n < n_) n *= 2;
        a.resize(2*n-1);
        REP(i, 2*n-1) a[i] = inf;
    }
    //k番目の値(0-indexed)をbに変更
    void update(int k, int b){
        k += n-1;
        a[k] = b;
        while(k > 0){
            k = (k-1)/2;
            a[k] = min(a[2*k+1], a[2*k+2]);
        }
    }
    //[c,b)の最小値を返す際に呼ぶ関数
    int query_first(int c, int b){
        return query(c, b, 0, 0, n);
    }
    //k : 節点番号, l, rはその接点が[l, r)に対応することを示す
    int query(int c, int b, int k, int l, int r){
        if(r <= c || b <= l) return inf;
        if(c <= l && r <= b) return a[k];
        else{
            int vl = query(c, b, k*2+1, l, (l+r)/2);
            int vr = query(c, b, k*2+2, (l+r)/2, r);
            return min(vl, vr);
        }
    }
};

struct UnionFind {
    vector<int> par;
    vector<int> rank;

    UnionFind(int n = 1){
        init(n);
    }

    void init(int n = 1){
        par.resize(n);
        rank.resize(n);
        REP(i, n) par[i] = i, rank[i] = 0; 
    }

    int root(int x){
        if(par[x] == x) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool merge(int x, int y){
        x = root(x); y = root(y);
        if(x == y) return false;
        if(rank[x] < rank[y]) swap(x, y);
        if(rank[x] == rank[y]) rank[x]++;
        par[y] = x;
        return true;
    }
};

template<class Abel> struct weightedUnionFind{
    vector<int> par;
    vector<int> rank;
    vector<Abel> diff_weight;

    weightedUnionFind(int n = 1, Abel SUM_UNITY = 0){
        init(n, SUM_UNITY);
    }

    void init(int n = 1, Abel SUM_UNITY = 0){
        par.resize(n); rank.resize(n); diff_weight.resize(n);
        REP(i, n) par[i] = i, rank[i] = 0, diff_weight[i] = SUM_UNITY; 
    }

    int root(int x){
        if(par[x] == x) return x;
        else{
            int r = root(par[x]);
            diff_weight[x] += diff_weight[par[x]];
            return par[x] = r;
        }
    }

    Abel weight(int x){
        root(x);
        return diff_weight[x];
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool merge(int x, int y, Abel w){
        w += weight(x); w -= weight(y);
        x = root(x); y = root(y);
        if(x == y) return false;
        if(rank[x] < rank[y]) swap(x, y), w = -w;
        if(rank[x] == rank[y]) rank[x]++;
        par[y] = x;
        diff_weight[y] = w;
        return true;
    }

    Abel diff(int x, int y){
        return weight(y) - weight(x);
    }
};

using Graph = vector<vector<int>>;
using P = pair<int, int>;

/*
void dijkstra(int s, int V, Graph &G, long* d){
    priority_queue<P, vector<P>, greater<P>> pque;
    fill(d, d + V, INF);
    d[s] = 0;
    pque.push(P(0, s));

    while(!pque.empty()){
        P p = pque.top(); pque.pop();
        int now = p.second;
        if(d[now] < p.first) continue;
        REP(i, G[now].size()){
            Edge e = G[now][i];
            if(d[e.to] > d[now] + e.weight){
                d[e.to] = d[now] + e.weight;
                pque.push(P(d[e.to], e.to));
            }
        }
    }
}
*/

int GCD(int a, int b){
    if(b == 0) return a; 
    if(a < b) return GCD(b, a);
    else return GCD(b, a%b);
}

struct BIT{
    vector<long> dat;
    int n = 1;

    BIT(int nn = 1){
        init(nn);
    }

    void init(int nn = 1){
        while(n < nn) n *= 2;
        dat.resize(n+1);
        REP(i, n+1) dat[i] = 0l;
    }
    //1-indexed!!!!
    //index iにx加える
    void add(int i, long x){
        while(i <= n){
            dat[i] += x;
            i += (i&(-i));
        }
    }
    //1-indexed!!!!!
    //index 1-iまでの和を求める
    long get_sum(int i){
        long ans = 0l;
        while(i > 0){
            ans += dat[i];
            i -= (i & (-i));
        }
        return ans;
    }
};

//{0, 1, 2, ..., n-1}までの中からk個の要素を持つ部分集合についての処理を行う
int next_combination(int sub){
    int x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}
//main関数内で
//bit = (1<<k)-1;
//for(; bit < (1<<n); bit = next_combination(bit))
// REP(i, n) if(bit & (1<<i)) でbitの中で選ばれている要素iを全部取得できる
//bitset<8>(bit)でbitを8桁の2進数で表示できる
struct Edge{
    int from, to, cost;
    Edge(int f, int t, int c){
        from = f;
        to = t;
        cost = c;
    }
};

struct BellmanFord{
    vector<Edge> es;
    vector<int> d;
    int E, V; // E 辺 V 頂点
    int inf = 1000000000;

    BellmanFord(int ee=1, int vv=1){
        E = ee;
        V = vv;
        d.resize(vv);
    }

    void update(int from, int to, int cost){
        es.push_back(Edge(from, to, cost));
    }

    void shortest_path(int start){
        REP(i, V) d[i] = inf;
        d[start] = 0;
        while(true){
            bool upd = false;
            REP(i, E){
                Edge e = es[i];
                if(d[e.from] != inf && d[e.to] > d[e.from] + e.cost){
                    d[e.to] = d[e.from] + e.cost;
                    upd = true;
                }
            }
            if(!upd) break;
        }
        REP(i, V){
            if(d[i] != inf) cout << d[i] << endl;
            else cout << "INF" << endl;
        }

    }

    //true : there is a negative loop.
    //false : there is NOT a negative loop.
    bool find_negative_loop(){
        REP(i, V) d[i] = 0;
        REP(i, V){
            REP(j, E){
                Edge e = es[j];
                if(d[e.to] > d[e.from] + e.cost){
                    d[e.to] = d[e.from] + e.cost;
                    if(i==V-1) return true;
                }
            }
        }
        return false;
    }

    //true : there is a negative loop including start.
    //false : there is NOT a negative loop including start.
    bool find_negative_loop_from_start(int start){
        REP(i, V) d[i] = inf;
        d[start] = 0;
        int itr = 0;
        while(true){
            bool upd = false;
            REP(i, E){
                Edge e = es[i];
                if(d[e.from] != inf && d[e.to] > d[e.from] + e.cost){
                    d[e.to] = d[e.from] + e.cost;
                    upd = true;
                }
            }
            if(!upd) break;
            itr++;
            if(itr == V) break;
        }
        if(itr == V) return true;
        else return false;
    }

};

int main()
{
    int V, E, r; cin >> V >> E >> r;
    BellmanFord bf(E, V);
    REP(i, E){
        int s, t, d; cin >> s >> t >> d;
        bf.update(s, t, d);
    }
    if(bf.find_negative_loop_from_start(r)) cout << "NEGATIVE CYCLE" << endl;
    else bf.shortest_path(r);

    return 0;
}



#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using vec = vector<ll>;
using vect = vector<double>;
using Graph = vector<vector<ll>>;
#define loop(i, n) for (ll i = 0; i < n; i++)
#define Loop(i, m, n) for (ll i = m; i < n; i++)
#define pool(i, n) for (ll i = n; i >= 0; i--)
#define Pool(i, m, n) for (ll i = n; i >= m; i--)
#define mod 1000000007ll;
#define setbit bitset<8>
#define flagcount __builtin_popcount
#define flag(x) (1 << x)
#define flagadd(bit, x) bit |= flag(x)
#define flagpop(bit, x) bit &= ~flag(x)
#define flagon(bit, i) bit &flag(i)
#define flagoff(bit, i) !(bit & (1 << i))
#define all(v) v.begin(), v.end()
#define low2way(v, x) lower_bound(all(v), x)
#define high2way(v, x) upper_bound(all(v), x)
#define count2way(v, x) high2way(v, x) - low2way(v, x)
#define lower(v, x) low2way(v, x) - v.begin()       //1番左が0、もし見つから無いならｎを出力
#define higher(v, x) high2way(v, x) - v.begin() - 1 //1番左が0、もし見つからないならn-1を出力（注意）
#define putout(a) cout << a << endl
#define putout2(a, b) \
    putout(a);        \
    putout(b)
#define putout3(a, b, c) \
    putout(a);           \
    putout(b);           \
    putout(c)
#define putout4(a, b, c, d) \
    putout(a);              \
    putout(b);              \
    putout(c);              \
    putout(d)
#define putout5(a, b, c, d, e) \
    putout(a);                 \
    putout(b);                 \
    putout(c);                 \
    putout(d);                 \
    putout(e)
#define Gput(a, b) G[a].push_back(b)
#define cin1(a) cin >> a
#define cin2(a, b) cin >> a >> b
#define cin3(a, b, c) cin >> a >> b >> c
#define cin4(a, b, c, d) cin >> a >> b >> c >> d
#define cin5(a, b, c, d, e) cin >> a >> b >> c >> d >> e
#define sum(v) accumulate(all(v), 0ll)
#define gcd(x, y) __gcd(x, y)
ll ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}
template <typename T>
T lcm(T x, T y)
{
    T z = gcd(x, y);
    return x * y / z;
}

template <typename T>
T primejudge(T n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    double sqrtn = sqrt(n);
    Loop(i, 3, sqrtn + 1)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
template <typename T>
T modinv(T a, T m)
{
    T b = m, u = 1, v = 0;
    while (b)
    {
        T t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}
//場合によって使い分ける
//const ll dx[4]={1,0,-1,0};
//const ll dy[4]={0,1,0,-1};
const ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//多次元配列の宣言法
//vector<vector<ll>> field(h, vector<ll>(w));
template <class T>
inline void chmax(T &a, T b)
{
    if (a < b)
        a = b;
}
template <class T>
inline void chmin(T &a, T b)
{
    if (a > b)
        a = b;
}
/*
ライブラリをここに置いてコメントを削除
*/
/*
このunion_find木で出来ること
例)union_find tree(N);などで宣言(N:頂点数)
tree.same(x,y):要素xと要素yが同じグループに属するか判定
tree.unite(x,y):要素xが属する木と要素yが属するグループの併合
tree.size(x,y):要素xが属する木の頂点数を返す
※グループの分割が出来ないことに注意！
計算量O(α(N))(ほぼO(1))
*/
struct union_find
{
    vector<long long> par;  //親の番号　
    vector<long long> rank; //木の深さ(根のランクは0)
    vector<long long> siz;  //要素xが根なら木の頂点数を格納する
    //初期化子リストを用いた初期化
    union_find(long long N) : par(N), rank(N), siz(N)
    {
        for (long long i = 0; i < N; i++)
        {
            par[i] = i;
            rank[i] = 0;
            siz[i] = 1;
        }
    }
    //要素xが所属する木の根を再帰的に発見する
    long long root(long long x)
    {
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]); //経路圧縮
    }
    //要素xが属する木と要素yが属する木の併合
    void unite(long long x, long long y)
    {
        long long rx = root(x);
        long long ry = root(y);
        if (rx == ry)
            return; //同じ木に属してたらそのまま
        if (rank[rx] < rank[ry])
        {
            par[rx] = ry; //根がryの木に併合
            siz[ry] = siz[rx] + siz[ry];
        }
        else
        {
            par[ry] = rx; //根がrxの木に併合
            siz[rx] = siz[rx] + siz[ry];
            if (rank[rx] == rank[ry])
                rank[rx]++;
        }
    }
    //要素xが属する木と要素yが属する木が同じならtrueを返す
    bool same(long long x, long long y)
    {
        return root(x) == root(y);
    }
    //要素xが属する木の頂点数を返す
    long long size(long long x)
    {
        return siz[root(x)];
    }
};
/*
クラスカル法
kruskal(V,E):無向グラフから最小全域木を作り使われる辺のコストを返す
使用するためにはunion_findが必要
計算量O(ElogV)
*/
struct kruskal_edge
    {
        long long u;
        long long v;
        long long cost;
    };
    //辺のコストの大小を比較
    bool kruskal_comp(const kruskal_edge &e1, const kruskal_edge &e2)
    {
        return e1.cost < e2.cost;
    }
    vector<kruskal_edge> kruskal_side;
    long long kruskal(long long V, long long E) //V:頂点数,E:辺数
    {
        sort(kruskal_side.begin(), kruskal_side.end(), kruskal_comp); //辺のコストが小さい順にソート
        union_find kruskal_tree(V);
        long long kruskal_res = 0;
        for (long long i = 0; i < E; i++)
        {
            kruskal_edge ks = kruskal_side[i];
            if (!kruskal_tree.same(ks.u, ks.v))
            {
                kruskal_tree.unite(ks.u, ks.v);
                kruskal_res += ks.cost;
            }
        }
        return kruskal_res;
    }
int main()
{
    cout << fixed << setprecision(30);
    long long V, E;
        cin >> V >> E;
        kruskal_side.resize(E);
        for (long long i = 0; i < E; i++)
        {
            long long s, t, d; //s,t:頂点(0~V-1(注意)),d:コスト
            cin >> s >> t >> d;
            kruskal_side[i].u = s;
            kruskal_side[i].v = t;
            kruskal_side[i].cost = d;
        }
        cout << kruskal(V, E) << endl;
        return 0;
    return 0;
}

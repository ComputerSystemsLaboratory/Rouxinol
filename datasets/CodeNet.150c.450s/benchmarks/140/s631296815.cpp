// クラスカルのアルゴリズム
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

#include<queue>

using namespace std;

const int MAX_V = 10000;
const int MAX_E = 100000;
const int MAX_W = 10000;

// 各辺の情報を持つクラス
class Edge
{
    public:
        int s, t, w;
        Edge(){}
        // s : 辺の開始頂点, t : 辺の終了頂点,  w : 辺の重み
        Edge(int s, int t, int w): s(s), t(t), w(w){}
};

// Union-Find木, Union-Findデータ構造のクラス
class DisjointSet
{
    public:
        // 木の高さ
        // 各ノード x を根とした時の木の高さが rank[x] となる
        vector<int> rank;
        // 親のNo.
        vector<int> p;

        // コンストラクタ
        DisjointSet() {}
        DisjointSet(int size)
        {
            rank.resize(size, 0);
            p.resize(size, 0);

            for(int i = 0; i < size; i++)
            {
                // 要素が 1つの集合を作る
                makeSet(i);
            }
        }

        // 要素が x ただ1つである新しい集合を作る
        void makeSet(int x)
        {
            // 根は自分自身を指すようにする
            p[x] = x;
            // 要素が 1 つの時は, rankは 0 とする
            rank[x] = 0;
        }

        // x と y が同じ集合に属するかの判定
        bool same(int x, int y)
        {
            return findSet(x) == findSet(y);
        }

        // 指定された2つの要素x, yを合併する
        void unite(int x, int y)
        {
            link(findSet(x), findSet(y));
        }

        // 2つの木を併合する処理
        void link(int x, int y)
        {
            // 低い木を高い木に合併する
            if( rank[x] > rank[y] )
            {
                p[y] = x;
            }
            else
            {
                p[x] = y;

                if( rank[x] == rank[y] )
                {
                    // 併合する木の高さが同じ時は,
                    // 合併される側の木の高さを 1 だけ増やす
                    rank[y]++;
                }
            }
        }

        // 要素 x が属する集合の"代表"の要素を求める
        // ( 戻り値は, 指定要素が属する木の親のNo. )
        int findSet(int x)
        {
            if( x != p[x] )
            {
                // ----------------
                // 経路圧縮を実施する
                // ----------------
                p[x] = findSet(p[x]);
            }

            // 根の値を返す ( x == p[x]の時は, 根である )
            return p[x];
        }
};

// sort()のための比較関数
bool lessW(const Edge &p1, const Edge &p2) { return p1.w < p2.w; }

Edge ary_Edge[MAX_E];

int main(void)
{

    int v, e, s, t, w;
    queue<Edge> Q_Edge;

    cin >> v >> e;

    // Union-Find木のクラスの作成
    DisjointSet ds = DisjointSet(v);

    for(int i = 0; i < e; i++)
    {
        cin >> s >> t >> w;

        ary_Edge[i].s = s;
        ary_Edge[i].t = t;
        ary_Edge[i].w = w;
    }

    // 辺の重みの昇順に並び替える
    sort(ary_Edge, ary_Edge + e, lessW);

    for(int i = 0; i < e; i++)
    {
        if( Q_Edge.size() == v )
        {
            // 全頂点が追加されたら処理の終了
            break;
        }

        // 辺の始点と終点の頂点が同じ木に属していないかを調べる
        if( ds.findSet(ary_Edge[i].s) != ds.findSet(ary_Edge[i].t) )
        {
            // 辺の始点と終点の頂点を併合する
            ds.unite(ary_Edge[i].s, ary_Edge[i].t);
            // 辺を集合に追加する
            Q_Edge.push(ary_Edge[i]);
        }
    }

    int sum = 0;
    int edge_num = Q_Edge.size();

    for(int i = 0; i < edge_num; i++)
    {
        Edge ele = Q_Edge.front();
        Q_Edge.pop();

        // 最小全域木の辺の和を求める
        sum += ele.w;
    }

    cout << sum << endl;

    return 0;
}


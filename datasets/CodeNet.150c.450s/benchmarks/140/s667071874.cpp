#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

#define PI (3.14159265358979323846)
#define INF (2147483647)
#define INF_LL (9223372036854775807)
#define DIV_NUM (1000000007)
typedef long long ll;

// 配列初期化テンプレ
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T& val) {
	std::fill((T*)array, (T*)(array + N), val);
}


// クラスカル法　O(ElogV)
#define MAX_E (100000)
struct edge { int u, v, cost; };
edge es[MAX_E];
int V, E; // V:頂点数、E:辺数

bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for (int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int kruskal() {
	sort(es, es + E, comp); // 辺をコストが小さい順に並べておく
    UnionFind G(V); // 集合XをUnionFindで管理
    int res = 0;
    for (int i = 0; i < E; i++) {
        edge e = es[i];
        if (!G.same(e.u, e.v)) { // コストが最も小さく、閉路が出来ない辺を選ぶ
            G.unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}


int main() {

    cin >> V >> E;

	for (int i = 0; i < E; i++) {
		cin >> es[i].u >> es[i].v >> es[i].cost;
	}

	int total_cost = kruskal();

	cout << total_cost << endl;

	return 0;

}


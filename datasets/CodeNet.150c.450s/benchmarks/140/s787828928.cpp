#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
struct Edge {
    long long from;
    long long to;
    long long cost;
};
bool comp(Edge A, Edge B) {
    return A.cost < B.cost;
}
struct Union_Find { //Union-Find木

	//Parent[i] : i の親の番号　例）Parent[3] = 2 のとき、3 の親の番号は 2.
	vector<int>Parent;
    Union_Find() {}
	//最初は全てが根であるとして初期化します.
	Union_Find(int N) : Parent(N) {
		for (int i = 0; i < N; i++) Parent.at(i) = i;
	}

	//ノードnodeが属する木の根の番号を再起関数により得る. root(node) = { node の木の根 }.
	int root(int node) {
		if (Parent.at(node) == node) return node;
		else return Parent.at(node) = root(Parent.at(node));
	}

	//Union-Find木の操作① xとyの木を併合させる. 但し、root(x) != root(y).
	//Union-Find木は、併合はできるが、分割ができないことに注意.
	void unite(int x, int y) {
		int root_x = root(x); //root_x : xの木の根の番号
		int root_y = root(y); //root_y : yの木の根の番号
		//併合させる2つの木の根が異なる場合のみ、2つの木を併合させることができるので、
		//2つの木の根が同じ場合はそのままで返す.
		if (root_x == root_y) return;
		//2つの木の根が異なる場合は、x の木の根 root_x を、y の木の根 root_y につける.
		Parent.at(root_x) = root_y;
	}

	//Union-Find木の操作② xとyの属する木が同じかどうかを調べる.
	//すなわち、xとyの属する木の根が同じかどうかを調べる.
	bool same(int x, int y) {
		int root_x = root(x);
		int root_y = root(y);
		return root_x == root_y;
	}
};
Union_Find U;
long long Kruskal(vector<Edge>&edges, long long V) {
    sort(edges.begin(), edges.end(), comp);
    U = Union_Find(V);
    long long sum = 0;
    for (long long i = 0; i < edges.size(); i++) {
        if (!U.same(edges.at(i).from, edges.at(i).to)) {
            U.unite(edges.at(i).from, edges.at(i).to);
            sum += edges.at(i).cost;
        }
    }
    return sum;
}
int main() {
    long long V, E;
    cin >> V >> E;
    vector<Edge>edges(E);
    for (long long i = 0; i < E; i++) {
        cin >> edges.at(i).to >> edges.at(i).from >> edges.at(i).cost;
    }
    long long ans = Kruskal(edges, V);
    cout << ans << endl;
}

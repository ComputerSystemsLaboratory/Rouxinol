#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define vi vector<int>
#define vvi vector<vector<int>>
using namespace std;

class UnionFind {
private:
    vector<vector<int>> Graph; // {ID,Number,ParentID,Height}

    void flatten(int x, int rootid) {
        int parentid = Graph[x][0];
        while (Graph[parentid][0] != Graph[parentid][2]) {
            Graph[parentid][2] = rootid;
            int next = Graph[parentid][2];
            parentid = next;
        }
    }
public:
    void push(int x) {
        int i = Graph.size();
        Graph.push_back({ i,x,i,1 });
    }
    void unite(int x, int y) {
        int hx = Graph[root(x)][3];
        int hy = Graph[root(y)][3];
        if (hx < hy) {
            Graph[root(x)][2] = root(y);
            flatten(x, root(y));
        }
        else if(hx == hy){
            Graph[root(y)][2] = root(x);
            Graph[root(x)][3]++;
            flatten(y, root(x));
        }
        else {
            Graph[root(y)][2] = root(x);
            flatten(y, root(x));
        }
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }

   
    int root(int x) {
        int parentid = Graph[x][0];
        while (Graph[parentid][0] != Graph[parentid][2]) {
            int next = Graph[parentid][2];
            parentid = next;
        }
       
        return parentid;
    }
};

int main() {
    int n; cin >> n;
    vector<vector<int>> edges; // {weight, from_id, to_id} both 0-indexed
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int w; cin >> w;
            if (w == -1) {
                continue;
            }
            else {
                vector<int> temp_edge = { w,i,j };
                edges.push_back(temp_edge);
            }
        }
    }

    sort(ALL(edges));
    int n_edges = 0;
    int TotalCost = 0;

    UnionFind uf;
    for (int i = 0; i < n; i++) uf.push(i);

    for (int i = 0; n_edges < n - 1; i++) {
        vector<int> edge = edges[i];
       
        if (uf.root(edge[1]) != uf.root(edge[2])) {
            uf.unite(edge[1], edge[2]);
            n_edges++;
            TotalCost += edge[0];
        }
    }


    cout << TotalCost << endl;
}

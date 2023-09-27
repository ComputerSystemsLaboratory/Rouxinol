#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> par; //par[i]:iの親の番号

    //初めは全てが根であるとして初期化する
    UnionFind(int N): par(N)
    {
        for (int i=0; i<N; i++) par[i]=i;
    }

    int root(int x)
    {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> G(E, vector<int>(2));
    priority_queue<vector<int>, vector<vector<int>> ,greater<vector<int>>> W;
    for (int i=0; i<E; i++)
    {
        vector<int> w(3);
        cin >> w[1] >> w[2] >> w[0];
        W.push(w);
    }
    UnionFind tree(V);
    int answer = 0;
    while(!W.empty())
    {
        vector<int> w = W.top();
        W.pop();
        if (!tree.same(w[1], w[2]))
        {
            tree.unite(w[1], w[2]); 
            answer+=w[0];
        }
    }
    cout << answer << endl;
}

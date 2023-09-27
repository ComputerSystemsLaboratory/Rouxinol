#include <iostream>
#include <string>
#include <vector>

using namespace std;

static const int N = 100000;
static const int NIL = -1;

// 連結成分(Connected Components)

vector<int> G[N];
int color[N] = { NIL };

void depthFirstSeach(int u, int colorGroup)
{
    color[u] = colorGroup;
    //頂点vにつながっている頂点v
    for (int i = 0; i < G[u].size(); i++)
    {
        int v = G[u][i];
        if (color[v] == NIL)
            depthFirstSeach(v, colorGroup);
    }
}


int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // 1行目は、ユーザー数n, 関係の数m
    int n, m;
    cin >> n >> m;
    // 2行目から、友達関係をm個
    for (int i = 0; i < m; i++)
    {
        int s, t; // sとtが友達
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    // init color
    for (int i = 0; i < n; i++)
        color[i] = NIL;

    int colorGroup = 1;
    for (int u = 0; u < n; u++)
    {
        // 色がついていないノード(color=NIL)に色を付ける。
        // 深さ優先探索で、たどり着けるところまで色を付ける。
        // これをNILがなくなるまで続けることで色分けできる。
        if (color[u] == NIL) depthFirstSeach(u, colorGroup++);
    }

    // 質問の数q
    int q;
    cin >> q;
    for (int i = 0; i< q; i++)
    {
        int qs, qt; // qsからqtにたどり着けるか?
        cin >> qs >> qt;
        cout << ((color[qs] == color[qt]) ? "yes" : "no") << endl;
    }

    return 0;
}

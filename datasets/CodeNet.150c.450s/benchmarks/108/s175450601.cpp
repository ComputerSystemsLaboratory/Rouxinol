#include <iostream>
#include <queue>
#include <string>

using namespace std;

static const int MAX = 100;
static const int INFTY = (1<<21);

// 幅優先探索
// 最短距離を求める。

struct Node
{
    // 頂点 0オリジン
    int id;
    // 頂点1からの距離。たどり着けない場合はINFTY
    int direction;
};

int M[MAX][MAX] = { 0 };
Node nodes[MAX];

void initNodes(Node *nodes, int len)
{
    for (int i = 0; i < len; i++)
    {
        nodes[i].id = i;
        nodes[i].direction = INFTY;
    }
    // nodes[0]は頂点1で、ここから開始するのでdirecton=0にする
    nodes[0].direction = 0;
}

// s 始点0オリジン
// n 頂点数
void depthFirstSearch(int s, int n)
{
    queue<Node> q;
    q.push(nodes[s]);

    while (!q.empty())
    {
        // c++のqueueはpopで値を返さない。先頭の参照を取得後、popで削除。
        Node uNode = q.front(); q.pop();
        // ここで訪問完了

        for (int v = 0; v < n; v++)
        {
            if (M[uNode.id][v] == 0) continue;     // 行き先がない。
            if (nodes[v].direction != INFTY) continue;   // すでに到達しているのでスキップ

            // u->vで、頂点uが保持している距離+1をnodes[v]に入れる
            nodes[v].direction = nodes[uNode.id].direction + 1;

            // 頂点uに隣接するvがここでキューに入る。
            // for文なので、このループで隣接する頂点がキューに入る。
            q.push(nodes[v]);
        }
    }
}

void printNodes(Node *nodes, int n)
{
    for (int i = 0; i < n; i++)
    {
        int val = nodes[i].direction == INFTY ? -1 : nodes[i].direction;
        cout << nodes[i].id + 1 << " " << val << endl;
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u; // 頂点番号
        cin >> k; // 次数
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            M[u-1][v-1] = 1;
        }
    }

    initNodes(nodes, MAX);
    depthFirstSearch(0, n); //始点0 = 頂点1から探索開始
    printNodes(nodes, n);
    return 0;
}

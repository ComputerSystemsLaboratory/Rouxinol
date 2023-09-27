#include <iostream>
#include <string>

// 深さ優先探索
// Depth First Search(DFS)
// 可能な限り隣接する頂点を訪問する

using namespace std;

const int N_MAX = 100;

enum ColorStatus
{
    WHITE_no_visit,
    GRAY_visit,
    BLACK_finished,
};

struct Node
{
   ColorStatus color;
   // 最初の訪問時刻
   int discoverTime;
   // 訪問完了時刻
   int finishTime;
};

int n; // 頂点数
int M[N_MAX][N_MAX] = { 0 };
Node nodes[N_MAX] = { WHITE_no_visit, 0, 0 };
int times = 0;

// 引数の頂点uを始点にして、深さ探索
// 頂点u->頂点v
void depthFirstSearch(int u)
{
    int v;

    nodes[u].color = GRAY_visit; // 頂点uに訪れた
    nodes[u].discoverTime = ++times; // 訪問時刻のタイムスタンプ
    // 行先頂点v
    for (int v = 0; v < n; v++)
    {
        if (M[u][v] == 0) continue;
        if (nodes[v].color == WHITE_no_visit)
            depthFirstSearch(v);
    }
    nodes[u].color= BLACK_finished; // 頂点uを訪問し終えた。
    nodes[u].finishTime = ++times;
}

void init()
{
    for (int u = 0; u < n; u++)
        if (nodes[u].color == WHITE_no_visit)
            depthFirstSearch(u);

    // 出力
    // 頂点番号 発見時刻 完了時刻
    for (int u = 0; u < n; u++)
    {
        cout << u + 1 << " " << nodes[u].discoverTime << " " << nodes[u].finishTime << endl;
    }

}



int main(int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u;
        int k;
        cin >> u; // 頂点番号
        cin >> k; // 出自数
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            M[u-1][v-1] = 1;
        }
    }

    init();


    return 0;
}

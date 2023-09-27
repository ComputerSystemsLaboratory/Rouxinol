// 幅優先探索
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

#define MAX_N 100
// 値の定義
const int INV = -1;
const int EXIST = 1;
const int NO_EXIST = 0;

// グラフ情報を保持する配列
int ary_graph[MAX_N + 1][MAX_N + 1];

// 頂点１からの距離を保持する配列
int vertex_distance[MAX_N + 1];

int n = 0;

void widthFirstSearch(int start_vertex);

int main(void)
{
    int u, num, v_num;

    for(int i = 0; i < MAX_N + 1; i++)
    {
    	vertex_distance[i] = INV;

        for(int j = 0; j < MAX_N + 1; j++)
        {
            // 配列の初期化
            ary_graph[i][j] = NO_EXIST;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> u >> num;

        // 0オリジンにする
        u--;

        for(int j = 0; j < num; j++)
        {
            // 隣接点を記憶する
            cin >> v_num;

            // 0オリジンにする
            v_num--;
            ary_graph[u][v_num] = EXIST;
        }
    }

    // 頂点１から幅優先探索を実施
    widthFirstSearch(0);

    // 結果の表示
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", i + 1, vertex_distance[i]);
    }

    return 0;
}

// 幅優先探索を実施する関数
// start_vertex : 起点となる頂点のNo.
// vertex_num : グラフの頂点数
void widthFirstSearch(int start_vertex)
{

    queue<int> Q;

    // 開始点の情報の設定
    Q.push(start_vertex);
    vertex_distance[start_vertex] = 0;

    while( !Q.empty() )
    {
        // キューの先頭要素を取得
        int u = Q.front();
        Q.pop();

        for(int v = 0; v < n; v++)
        {

            if( ary_graph[u][v] == EXIST && vertex_distance[v] == INV )
            {

                // ----- 未訪問の頂点が見つかった -----

                // 距離情報の更新
                vertex_distance[v] = vertex_distance[u] + 1;

                // キューにプッシュする
                Q.push(v);
            }
        }
    }

    return;
}


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

const int YES = 0;
const int NO = -1;

// グラフ情報を保持する配列
int ary_graph[MAX_N + 1][MAX_N + 1];

// 頂点１からの距離を保持する配列
int vertex_distance[MAX_N + 1];
// 頂点１からの訪問状態を保持する配列
int ary_visit[MAX_N + 1];

int n = 0;
int nt[MAX_N + 1];

void widthFirstSearch(int start_vertex);

int main(void)
{
    int u, num, v_num;

    for(int i = 0; i < MAX_N + 1; i++)
    {
    	vertex_distance[i] = 0;
        ary_visit[i] = NO;

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
        if( i != 0 && vertex_distance[i] == 0 )
        {
            // 開始点から到達不可能な点は, 距離に-1を設定
            // ただし, 開始点自身は除く
            vertex_distance[i] = INV;
        }

        printf("%d %d\n", i + 1, vertex_distance[i]);
    }

    return 0;
}

// u に隣接する v を番号順に取得
int next(int u)
{
    int ret = INV;

    for(int v = nt[u]; v < n; v++)
    {
        nt[u] = v + 1;

        if( ary_graph[u][v] == EXIST )
        {
            // 隣接点が存在する
            ret = v;
            break;
        }
    }

    return ret;
}

// 幅優先探索を実施する関数
// start_vertex : 起点となる頂点のNo.
// vertex_num : グラフの頂点数
void widthFirstSearch(int start_vertex)
{

    queue<int> Q;

    Q.push(start_vertex);
    vertex_distance[start_vertex] = 0;
    ary_visit[start_vertex] = YES;

    while( !Q.empty() )
    {
        int u = Q.front();

        for(int i = 0; i < n; i++)
        {
            // 隣接点を全て検索する
            int v = next(u);

            if( v == INV )
            {
                // 隣接点が無くなったらキューから削除して, 処理終了
                Q.pop();
                break;
            }

            if( ary_visit[v] == NO
                && ary_graph[u][v] == EXIST )
            {
                // 訪問済み
                ary_visit[v] = YES;

                Q.push(v);
                vertex_distance[v] = vertex_distance[u] + 1;
            }
        }
    }

    return;
}


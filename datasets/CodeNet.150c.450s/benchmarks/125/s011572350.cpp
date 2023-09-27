// 深さ優先探索
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 100
// 値の定義
const int EXIST = 1;
const int NO_EXIST = 0;

const int WHITE = 0;// 未訪問
const int GRAY = 1; // 訪問中
const int BLACK = 2;// 訪問完了

// グラフ情報を保持する配列
int ary_graph[MAX_N + 1][MAX_N + 1];

// 各頂点の訪問状態を保持する配列
int color[MAX_N + 1];

// 発見時刻と完了時刻を保持する構造体
typedef struct
{
    int start_time;
    int end_time;
}SearchTime;

SearchTime st_SearchTime[MAX_N + 1];
int search_T = 0;

void depthFirstSearch(int now_vertex, int vertex_num);

int main(void)
{
    int n, u, num, v_num;

    for(int i = 0; i < MAX_N + 1; i++)
    {
        color[i] = WHITE;

        for(int j = 0; j < MAX_N + 1; j++)
        {
            // 配列の初期化
            ary_graph[i][j] = NO_EXIST;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> u;
        cin >> num;

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

    // 深さ優先探索を実施
    for(int i = 0; i < n; i++)
    {
        if( color[i] == WHITE )
        {
            depthFirstSearch(i, n);
        }
    }

    // 結果の表示
    for(int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", i + 1, st_SearchTime[i].start_time, st_SearchTime[i].end_time);
    }

    return 0;
}

// 深さ優先探索を実施する関数
// now_vertex : 現在の頂点のNo.
// next_vertex : 次の頂点のNo.
// vertex_num : グラフの頂点数
void depthFirstSearch(int now_vertex, int vertex_num)
{
    // 訪問中
    color[now_vertex] = GRAY;

    // 発見時刻の設定
    search_T++;
    st_SearchTime[now_vertex].start_time = search_T;

    for(int i = 0; i < vertex_num; i++)
    {
        if( color[i] == WHITE
            && ary_graph[now_vertex][i] == EXIST )
        {
            depthFirstSearch(i, vertex_num);
        }
    }

    // 訪問完了
    color[now_vertex] = BLACK;

    // 終了時刻の設定
    search_T++;
    st_SearchTime[now_vertex].end_time = search_T;

    return;
}


// 最小全域木 ( プリム法 )
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
const int MAX_W = 2000;

// グラフ情報を保持する配列
int ary_graph[MAX_N + 1][MAX_N + 1];

// 入力された頂点を保持するキュー
queue<int> Base_Queue;

int n = 0;

// プリム法で最小全域木を求める
int MinimumSpanningTree(int start_vertex);

int main(void)
{
    int sum = 0;

    for(int i = 0; i < MAX_N + 1; i++)
    {
        for(int j = 0; j < MAX_N + 1; j++)
        {
            // 配列の初期化
            ary_graph[i][j] = INV;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        // グラフを構成する頂点の格納
        Base_Queue.push(i);

        for(int j = 0; j < n; j++)
        {
            // 隣接行列の設定
            cin >> ary_graph[i][j];
        }
    }

    // 頂点１から最小全域木を探索する
    sum = MinimumSpanningTree(0);

    // 結果の表示
    printf("%d\n", sum);

    return 0;
}

// 最小全域木を探索する関数
// start_vertex : 起点となる頂点のNo.
int MinimumSpanningTree(int start_vertex)
{

    int q_size_1, q_size_2, min_val, min_ele, s, t, tmp;
    // 辺の和を保持する変数
    int sum = 0;

    // 最小全域木を構成する頂点を保持するキュー
    queue<int> Prim_Queue;

    // 検索する頂点の初期値の設定
    s = Base_Queue.front();
    Base_Queue.pop();
    Prim_Queue.push(s);

    while( !Base_Queue.empty() )
    {
        min_val = MAX_W;
        min_ele = INV;
        q_size_1 = Base_Queue.size();
        q_size_2 = Prim_Queue.size();

        for( int i = q_size_2 - 1; i >= 0; i-- )
        {
            // s から t に向かう辺の重みを探索する
            s = Prim_Queue.front();
            Prim_Queue.pop();
            // 要素を順番に取り出すために, 取り出したものを元に戻す
            Prim_Queue.push(s);

            for( int i = q_size_1 - 1; i >= 0; i-- )
            {
                t = Base_Queue.front();
                Base_Queue.pop();

                if( ary_graph[s][t] != INV && min_val > ary_graph[s][t] )
                {
                    // 最小のコストを持つ, 辺を探索する
                    min_val = ary_graph[s][t];
                    min_ele = t;
                }

                // 一旦, 元に戻す
                Base_Queue.push(t);
            }
        }

        // 最小のコストを持つ辺の頂点を追加して, 木を構成する
        for(int i = 0; i < Base_Queue.size(); i++)
        {
            tmp = Base_Queue.front();
            Base_Queue.pop();

            if( tmp == min_ele )
            {
                Prim_Queue.push(tmp);
                break;
            }
            else
            {
                Base_Queue.push(tmp);
            }
        }

        sum += min_val;

    }

    return sum;
}


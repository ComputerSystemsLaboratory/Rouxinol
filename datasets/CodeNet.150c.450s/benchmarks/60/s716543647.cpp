// 最長共通部分列 問題
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
// 無効な値の定義
const int INV = -1;

int main(void)
{
    int n, u, num, v_num;
    int ary_graph[MAX_N + 1][MAX_N + 1];

    for(int i = 0; i < MAX_N + 1; i++)
    {
        for(int j = 0; j < MAX_N + 1; j++)
        {
            // 配列の初期化
            ary_graph[i][j] = 0;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> u;
        cin >> num;

        for(int j = 0; j < num; j++)
        {
            // 隣接点を記憶する
            cin >> v_num;
            ary_graph[u][v_num] = 1;
        }
    }

    // 結果の表示をする
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if( j > 1 )
            {
                cout << " ";
            }

            cout << ary_graph[i][j];
        }

        cout << endl;
    }

    return 0;
}


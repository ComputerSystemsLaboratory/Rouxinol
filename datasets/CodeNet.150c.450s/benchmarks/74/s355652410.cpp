// コイン問題
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cassert>

#include<vector>
#include<queue>
#include<set>

using namespace std;

const int INF = 100000;
const int MAX_N = 50000;
const int MAX_M = 20;

// コインの額面を保持する配列
// １を開始とする配列
int C[MAX_N + 1];
// コインの枚数を保持する配列
int T[MAX_M + 1][MAX_N + 1];

int n, m;

int CoinProblem();

int main(void)
{
    int coin;

    // 配列の初期化
    for(int i = 0; i < MAX_M + 1; i++)
    {
        for(int j = 0; j < MAX_N + 1; j++)
        {
            if( j == 0 )
            {
                T[i][j] = 0;
            }
            else
            {
                // 初期値の設定
                T[i][j] = INF;
            }
        }
    }

    cin >> n >> m;

    for(int i = 1; i <= m; i++)
    {
        // 要素数：１からコインの要素を入れていく
        cin >> coin;
        C[i] = coin;
    }

    // 動的計画法の実施
    CoinProblem();

    int min = INF;

    for( int i = 1; i <= m; i++)
    {
        if( min > T[i][n] )
        {
            min = T[i][n];
        }
    }

    printf("%d\n", min);

    return 0;
}

// コイン問題を解く関数
int CoinProblem()
{
    for(int j = 0; j <= n; j++)
    {
        for(int i = 1; i <= m; i++)
        {
            int num = j - C[i];

            if( num >= 0 )
            {
                // i番目のコインを使う時
                T[i][j] = T[i][num] + 1;
            }
            else
            {
                // i番目のコインを使わない時
                T[i][j] = T[i - 1][j];
            }

            // コインの枚数が少ない方を設定する
            T[i][j] = min(T[i - 1][j], T[i][j]);
        }
    }

    return 0;
}


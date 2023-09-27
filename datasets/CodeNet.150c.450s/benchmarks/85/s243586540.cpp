// 連鎖行列積 問題
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
#define ELE_NUM 2
// 無効な値の定義
const int INV = -1;

const int colNo = 0;
const int rowNo = 1;
const int IntMAX = 	2147483647;

int ChainedMatrixtMultiplication(int n, int m, int matrixData[][ELE_NUM]);

int main(void)
{

    int n, count;
    int matrix_data[MAX_N + 1][ELE_NUM];

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // 行
        cin >> matrix_data[i][colNo];
        // 列
        cin >> matrix_data[i][rowNo];
    }

    count = ChainedMatrixtMultiplication(n, ELE_NUM, matrix_data);
    printf("%d\n", count);

    return 0;
}

// 連鎖行列積の最小の乗算回数を演算する関数
// n : 積を求める行列の数
// m : 行列の情報 : 0 - 行の情報, 1 - 列の情報
// matrixData[][] : 各行列の行、列情報を保持する配列
int ChainedMatrixtMultiplication(int n, int m, int matrixData[][ELE_NUM])
{

    // 第1要素 : 演算開始のNo., 第2要素 : 演算終了のNo.
    int dp[MAX_N + 1][MAX_N + 1];
    int calcResult = 0;

    // 配列の初期化
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            dp[i][j] = INV;

            if( i == j )
            {
                // 同じ要素同士の積は演算することが不可能
                dp[i][j] = 0;
            }
        }
    }

    // 行列の演算回数の計算
    for(int l = 2; l <= n; l++)
    {
        for(int i = 1; i <= n - l + 1; i++)
        {
            int j = i + l - 1;

            dp[i][j] = IntMAX;

            for(int k = i; k <= j - 1; k++)
            {
                // 3つ以上の要素の積の時
                calcResult = dp[i][k] + dp[k + 1][j]
                            + ( matrixData[i][colNo] * matrixData[k][rowNo] * matrixData[j][rowNo]);

                dp[i][j] = min( dp[i][j], calcResult );
            }
        }
    }

    return dp[1][n];
}


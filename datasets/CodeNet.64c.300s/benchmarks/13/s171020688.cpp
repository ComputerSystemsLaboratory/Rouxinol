// フィボナッチ数列
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 44
// 無効な値の定義
const int INV = -1;

// フィボナッチ数列を保持する配列
int fib[MAX_N + 1];

int Fibonacci(int n);

int main(void)
{

    int n;

    cin >> n;

    for(int i = 0; i < MAX_N + 1; i++)
    {
        fib[i] = INV;
    }

    fib[0] = 1;
    fib[1] = 1;

    // フィボナッチ数列の表示
    printf("%d\n", Fibonacci(n));

    return 0;
}

// フィボナッチ数列を算出する関数
int Fibonacci(int n)
{

    if( n <= 1)
    {
        // n = 0, n = 1 の時
        return 1;
    }

    if( fib[n] != INV )
    {
        // 既に計算されている時は, 結果を返す
        return fib[n];
    }

    // フィボナッチ数列の算出の算出
    fib[n] = Fibonacci(n - 1) + Fibonacci(n - 2);

    return fib[n];
}


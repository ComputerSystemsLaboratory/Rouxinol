// 計数ソート
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 2000000
//const int INFTY = 2147483647;

void CountingSort(int base[], int sort[], int n, int max);

int main(void)
{

    int n;
    int max = 0;

    int *A = new int[MAX_N + 1];
    int *B = new int[MAX_N + 1];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> A[i + 1];

        if( max < A[i + 1] )
        {
            // 最大値を保存する
            max = A[i + 1];
        }
    }

    CountingSort(&A[0], &B[0], n, max);

    for(int i = 1; i <= n; i++)
    {
        if( i > 1 )
        {
            printf(" ");
        }

        printf("%d", B[i]);
    }

    printf("\n");

    return 0;
}

// 計数ソートを実施する関数
void CountingSort(int base[], int sort[], int n, int max)
{
    int *count = new int[max + 1];
	//int count[10];

    for(int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // count[]に各要素の出現回数を記録する
    for(int i = 0; i < n; i++)
    {
        count[ base[i + 1] ]++;
    }

    // count[]に i 以下の数の出現数を記録する
    for(int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // count[]に i 以下の数の出現数を記録する
    for(int i = n; i > 0; i--)
    {
        sort[ count[ base[i] ] ] = base[i];
        count[ base[i] ]--;
    }

    return;
}


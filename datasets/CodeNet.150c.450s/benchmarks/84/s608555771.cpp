// 反転数
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 200000
const int INFTY = 2147483647;

typedef long long llong;

int cmp_count = 0;

llong mergeSort(int A[], int n, int left, int right);
llong merge(int A[], int n, int left, int mid, int right);

int main(void)
{
    llong flip_count;

    int A[MAX_N];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // マージソートを実施
    flip_count = mergeSort(A, n, 0, n);

/*
    // 結果の表示
    for(int i = 0; i < n; i++)
    {
        if( i )
        {
            printf(" ");
        }

        printf("%d", A[i]);
    }

    printf("\n%d\n", cmp_count);

*/
    printf("%lld\n", flip_count);

    return 0;
}

// マージソートを実施する関数
llong mergeSort(int A[], int n, int left, int right)
{
    llong c1, c2, c3, cnt = 0;

    // 最小単位まで分割する
    if ( left + 1 < right )
    {
        int mid = ( left + right ) / 2;
        c1 = mergeSort(A, n, left, mid);
        c2 = mergeSort(A, n, mid, right);
        c3 = merge(A, n, left, mid, right);

        cnt = c1 + c2 + c3;
  }

  return cnt;
}

// 分割された要素を並び替える関数
llong merge(int A[], int n, int left, int mid, int right)
{

    // 反転数
    llong flip_count = 0;

    vector<int> L, R;

    int n1 = mid - left;
    int n2 = right - mid;

    // L[0...n1], R[0...n2] を生成
    for(int i = 0; i < n1; i++)
    {
        // 前半部分の配列を作成する
        L.push_back(A[left + i]);
    }

    for(int i = 0; i < n2; i++)
    {
        // 後半部分の配列を作成する
        R.push_back(A[mid + i]);
    }

    // 前半と後半の配列の最後の要素に最大値を入れておく
    // ( 比較時の番兵として使用 )
    L.push_back(INFTY);
    R.push_back(INFTY);

    int i = 0;
    int j = 0;

    for(int k = left; k < right; k++)
    {
        // 前半部分の配列と後半部分の配列を比較する
        if ( L[i] <= R[j] )
        {
            A[k] = L[i++];
        }
        else
        {
            A[k] = R[j++];
            // 反転数の計算
            flip_count += n1 - i;
        }

        cmp_count++;
    }

    return flip_count;
}


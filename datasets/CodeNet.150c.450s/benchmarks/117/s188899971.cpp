// マージソート
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 500000

int cmp_count = 0;

void mergeSort(int A[], int left, int right);
void merge(int A[], int left, int mid, int right);

int main(void)
{
    int A[MAX_N];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // マージソートを実施
    mergeSort(A, 0, n);

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

    return 0;
}

// マージソートを実施する関数
void mergeSort(int A[], int left, int right)
{
    // 最小単位まで分割する
    if ( left + 1 < right )
    {
        int mid = ( left + right ) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
  }

  return;
}

// 分割された要素を並び替える関数
void merge(int A[], int left, int mid, int right)
{

    const int INFTY = 2147483647;
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

    L.push_back(INFTY);
    R.push_back(INFTY);

    int i = 0;
    int j = 0;

    for(int k = left; k < right; k++)
    {
        // 前半部分の配列と後半部分の配列を比較する
        if ( L[i] <= R[j] )
        {
            A[k] = L[i];
            i = i + 1;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
        }

        cmp_count++;
    }
}


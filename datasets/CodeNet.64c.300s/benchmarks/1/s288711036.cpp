// パーティション
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 100000
//const int INFTY = 2147483647;

int partition(int A[], int p, int r);

int main(void)
{

    int n, pos;
    int A[MAX_N];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    pos = partition(A, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        if( i )
        {
            printf(" ");
        }

        if( i != pos )
        {
            printf("%d", A[i]);
        }
        else
        {
            printf("[%d]", A[i]);
        }
    }

    printf("\n");

    return 0;
}

int partition(int A[], int p, int r)
{
    int x = 0, i = 0, tmp = 0;

    x = A[r];
    i = p - 1;

    for(int j = p; j < r; j++)
    {
        if( A[j] <= x )
        {
            i++;

            // A[i] と A[j]を交換
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }

    // A[i + 1] と A[r]を交換
    tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;

    return i + 1;
}


/*
 * Problem Description: Partition
 * Category: Sort
 * Author: Khan
 * Date: 19th October, 2017
 */

#include <stdio.h>

#define MAXN 100000

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int A[], int p, int r)
{
    int x, t;
    x = A[r];
    int i = p - 1;
    for (int j = p; j < r; ++j)
        if(A[j] <= x)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    swap(&A[i + 1], &A[r]);
    return (i + 1);
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int n, A[MAXN];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &A[i]);
    int q = partition(A, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        if(i)
            printf(" ");
        if(i == q)
            printf("[");
        printf("%d", A[i]);
        if(i == q)
            printf("]");
    }
    printf("\n");
    return 0;
}
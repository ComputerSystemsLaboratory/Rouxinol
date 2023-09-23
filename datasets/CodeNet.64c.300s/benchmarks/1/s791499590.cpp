#include <cstdio>
#include <iostream>
using namespace std;

int A[100005];
int partition(int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int q;
    q = partition(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i < q)
        {
            printf("%d ", A[i]);
        }
        else if (i == q)
        {
            printf("[%d]", A[i]);
            if (i == n - 1)
                printf("\n");

            else
                printf(" ");
        }
        else
        {
            if (i < n - 1)
                printf("%d ", A[i]);
            else
                printf("%d\n", A[i]);
        }
    }
    return 0;
}

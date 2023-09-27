//ALDS1_5_D Recursion / Divide and Conquer - The Number of Inversions
#include <cstdio>

#define MAX 500000
#define SENTINAL 2000000000

int n, L[MAX / 2 + 2], R[MAX / 2 + 2];

long long merge(int *A, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    long long c = 0;

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = A[mid + i];
    }
    L[n1] = R[n2] = SENTINAL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i++];
        }
        else
        {
            A[k] = R[j++];
            c += mid + j - k - 1;
        }
    }
    return c;
}

long long mergeSort(int *A, int left, int right)
{
    long long c1,c2,c3;
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        c1 = mergeSort(A, left, mid);
        c2 = mergeSort(A, mid, right);
        c3 = merge(A, left, mid, right);
        return c1+c2+c3;
    }
    return 0;
}

int main(void)
{
    int A[MAX];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    long long cnt = mergeSort(A, 0, n);
    printf("%lld\n", cnt);

    return 0;
}

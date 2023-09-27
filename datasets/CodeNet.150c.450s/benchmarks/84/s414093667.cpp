#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
#define inf 1000000001
using namespace std;

int n;
int A[200000];
unsigned long long c = 0;

void merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[mid + i];

    L[n1] = R[n2] = inf;
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
            c += n1 - i;
        }
    }
}

void mergeSort(int A[], int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    mergeSort(A, 0, n);
    cout << c << "\n";
    return 0;
}

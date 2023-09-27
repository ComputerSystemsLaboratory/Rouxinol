#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAX = 0x3f3f3f3f;
const int maxn = 500000 + 5;
int a[maxn];
int L[(maxn >> 1) + 5], R[(maxn >> 1) + 5];
int cnt;

void merge(int left, int mid, int right)
{
    int x = mid - left;
    int y = right - mid;
    for (int i = 0; i < x; i++)
        L[i] = a[left + i];
    for (int i = 0; i < y; i++)
        R[i] = a[mid + i];

    L[x] = R[y] = MAX;
    int i = 0, j = 0;
    for (int k = left; k < right; k++)
    {
        ++cnt;
        if (L[i] <= R[j])
            a[k] = L[i++];
        else
            a[k] = R[j++];
    }
}

void MergeSort(int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) >> 1;
        MergeSort(left, mid);
        MergeSort(mid, right);
        merge(left, mid, right);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    cnt = 0;
    MergeSort(0, n); //左闭右开

    for (int i = 0; i < n - 1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n - 1]);
    printf("%d\n", cnt);
    return 0;
}


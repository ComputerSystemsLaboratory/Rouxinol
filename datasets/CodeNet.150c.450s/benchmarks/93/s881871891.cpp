#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAX = 0x3f3f3f3f;
const int maxn = 100000 + 5;

struct Card
{
    char suit;
    int val;
};
Card a[maxn], b[maxn], L[(maxn >> 1) + 5], R[(maxn >> 1) + 5];

int partition(int left, int right)
{
    Card x = a[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (a[j].val <= x.val)
        {
            i++;
            swap (a[i], a[j]);
        }
    }
    swap(a[i+1], a[right]);
    return i + 1;
}

void quickSort(int left, int right)
{
    int selected;
    if (left < right)
    {
        selected = partition(left, right);
        quickSort(left, selected - 1);
        quickSort(selected + 1, right);
    }
}

void merge(int left, int mid, int right)
{
    int x = mid - left;
    int y = right - mid;
    for (int i = 0; i < x; i++)
        L[i] = b[left + i];
    for (int i = 0; i < y; i++)
        R[i] = b[mid + i];

    L[x].val = R[y].val = MAX;
    int i = 0, j = 0;
    for (int k = left; k < right; k++)
    {
        if (L[i].val <= R[j].val)
            b[k] = L[i++];
        else
            b[k] = R[j++];
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

    char tempS[2];
    int tempV;
    for (int i = 0; i < n; i++)
        {
            scanf("%s %d", tempS, &tempV);
            a[i].suit = b[i].suit = tempS[0];
            a[i].val = b[i].val = tempV;
        }

    quickSort(0, n - 1);
    MergeSort(0, n);

    bool stable = true;
    for (int i = 0; i < n; i++)
        if (a[i].suit != b[i].suit)
        {
            stable = false;
            break;
        }

    if (stable)
        printf("Stable\n");
    else
        printf("Not stable\n");
    for (int i = 0; i < n; i++)
        printf("%c %d\n", a[i].suit, a[i].val);

    return 0;
}


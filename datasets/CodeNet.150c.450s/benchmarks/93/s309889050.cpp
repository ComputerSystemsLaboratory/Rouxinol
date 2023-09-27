#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

struct Card
{
    char suit;
    int rank;
};

bool comp(Card a, Card b)
{
    return a.rank < b.rank;
}

int partition(Card A[], int p, int r)
{
    int x = A[r].rank;
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j].rank <= x)
            swap(A[++i], A[j]);
    }
    swap(A[r], A[i + 1]);
    return i + 1;
}

void quickSort(Card A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main()
{
    int n;
    scanf("%d%*c", &n);
    Card A[n], B[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c %d%*c", &A[i].suit, &A[i].rank);
        B[i] = A[i];
    }

    quickSort(A, 0, n - 1);
    stable_sort(B, B + n, comp);

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i].suit != B[i].suit)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        printf("Stable\n");
    else
        printf("Not stable\n");

    for (int i = 0; i < n; i++)
        cout << A[i].suit << " " << A[i].rank << "\n";
    return 0;
}

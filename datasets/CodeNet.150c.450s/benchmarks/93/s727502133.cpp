#include <iostream>
#define MAX 100001
#define SENTINEL 2000000000
using namespace std;

struct Card
{
    string suit;
    int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

int cnt;
int n;

void merge(Card A[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = A[mid + i];
    }
    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++)
    {
        cnt++;
        if (L[i].value <= R[j].value)
        {
            A[k] = L[i++];
        }
        else
        {
            A[k] = R[j++];
        }
    }
}

void mergeSort(Card A[], int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int partition(Card A[], int p, int r)
{
    Card x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j].value <= x.value)
        {
            i = i + 1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
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
    scanf("%d", &n);
    Card A[MAX], B[MAX];
    string S;
    int v, stable = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> S >> v;
        A[i].suit = B[i].suit = S;
        A[i].value = B[i].value = v;
    }
    mergeSort(A, 0, n);
    quickSort(B, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        if (A[i].suit != B[i].suit)
            stable = 0;
    }
    if (stable)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << B[i].suit << " " << B[i].value << endl;
    }
    return 0;
}


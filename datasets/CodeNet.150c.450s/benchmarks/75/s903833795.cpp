#include <bits/stdc++.h>
using namespace std;

int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }
void maxHeapify(int a[], int i, int n)
{
    int l = left(i);
    int r = right(i);
    int largest = 0;

    if (l <= n && a[l] > a[i])
        largest = l;
    else
        largest = i;
    if (r <= n && a[r] > a[largest])
        largest = r;

    if (largest != i)
    {
        swap(a[i], a[largest]);
        maxHeapify(a, largest, n);
    }
}
void buildMaxHeap(int a[], int n)
{
    for (int i = n / 2; i > 0; i--)
        maxHeapify(a, i, n);
}

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    buildMaxHeap(a, n);
    for (int i = 1; i <= n; i++)
    {
        cout << ' ';
        cout << a[i];
    }
    cout << endl;
}

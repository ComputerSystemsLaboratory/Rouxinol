#include <iostream>
using namespace std;
#define MAX 100000
#define SENTINEL 2000000000

struct h
{
    char t;
    int m;
};
h A[100005], L[100005], R[100005];
int partition(h A[], int p, int r)
{
    int x = A[r].m;
    int i = p-1;
    for(int j=p; j<r; j++)
    {
        if(A[j].m <= x)
        {
            i++;
            swap(A[i],A[j]);

        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
void quickSort(h A[], int p, int r)
{
    if(p < r)
    {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}
void merge(h A[], int n, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i=0; i<n1; i++)
        L[i] = A[left+i];
    for(int i=0; i<n2; i++)
        R[i] = A[mid+i];
    int i=0, j=0;
    L[n1].m = R[n2].m = SENTINEL;
    for(int k=left; k<right; k++)
    {
        if(L[i].m <= R[j].m)
        {
            A[k] = L[i++];
        }
        else
        {
            A[k] = R[j++];
        }
    }
}
void mergeSort(h A[], int n, int left, int right)
{
    if(left+1 < right)
    {
        int mid = (left+right)/2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}
int main()
{
    int n;
    cin >> n;
    h c1[100005], c2[100005];
    for(int i=0; i<n; i++)
    {
        cin >> c1[i].t >> c1[i].m;
        c2[i] = c1[i];
    }
    mergeSort(c1, n, 0, n);
    quickSort(c2, 0, n-1);
    for(int i=0; i<n; i++)
    {
        if(c1[i].t != c2[i].t)
        {
            cout << "Not stable" << endl;
            break;
        }
        if(i == n-1)   cout << "Stable" << endl;
    }
    for(int i=0; i<n; i++)
        cout << c2[i].t << " " << c2[i].m << endl;
    return 0;
}
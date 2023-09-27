#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;

#define MAX 200005
#define INFTY INT_MAX;

ll invCount = 0;

void merge(int *a, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int *l, *r;
    l = new int[n1+1];
    r = new int[n2+1];

    for (int i = 0; i < n1; i++)
        l[i] = a[left+i];
    for (int i = 0; i < n2; i++)
        r[i] = a[mid+i];
    l[n1] = r[n2] = INFTY;

    int i = 0;
    int j = 0;
    for (int k = 0; k < n1+n2; k++) {
        if (l[i] <= r[j]) {
            a[left+k] = l[i];
            i++;
        } else {
            a[left+k] = r[j];
            j++;
            invCount += n1-i;
        }
    }

    delete[] l;
    delete[] r;

}

void mergeSort(int* a, int left, int right)
{
    if (left + 1 >= right) return;
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
}

int main(int, char**)
{
    int n;
    cin >> n;

    int *a;
    a = new int[MAX];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(a, 0, n);

    cout << invCount << endl;
    delete[] a;

    return 0;
}

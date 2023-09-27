#include <iostream>

using namespace std;

const int MAX = 200000 + 1;
const int SENTINEL = 2000000000;
int a[MAX];
int L[MAX/2+2], R[MAX/2+2];

long long merge(int a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    L[n1] = R[n2] = SENTINEL;
    for (int i = 0; i < n1; ++i) L[i] = a[left+i];
    for (int i = 0; i < n2; ++i) R[i] = a[mid+i];
    long long count = 0;

    int p = 0, q = 0;
    for (int k = left; k < right; ++k) {
        if (L[p] <= R[q]) {
            a[k] = L[p++];
        } else {
            a[k] = R[q++];
            count += n1 - p;
        }
    }

    return count;
}

long long merge_sort(int a[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        long long v1 = merge_sort(a, left, mid);
        long long v2 = merge_sort(a, mid, right);
        long long v3 = merge(a, left, mid, right);
        return v1 + v2 + v3;
    } else return 0;
}

int
main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    long long v = merge_sort(a, 0, n);
    cout << v << endl;

    return 0;
}
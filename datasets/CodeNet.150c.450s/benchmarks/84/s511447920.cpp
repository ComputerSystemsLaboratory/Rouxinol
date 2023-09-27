/*
** 逆序数
*/

# include <iostream>
using namespace std;

# define MAX 200010
# define SENTINEL 2000000000
typedef long long llong;

int s[MAX], n;
llong cnt;

int L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i++];
        }
        else {
            a[k] = R[j++];
            cnt += n1 - i;
        }
    }
}

void mergeSort(int a[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cnt = 0;
    mergeSort(s, 0, n);
    cout << cnt << endl;
    return 0;
}

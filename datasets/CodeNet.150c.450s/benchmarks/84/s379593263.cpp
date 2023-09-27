#include <iostream>
using namespace std;
#define MAX 200000
#define SENTINEL 2000000000
typedef long long llong;

int L[MAX/2 + 2], R[MAX/2 + 2];

llong merge(int A[], int left, int mid, int right)
{
    llong cnt = 0;
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    for (i = 0; i < n1; i++) L[i] = A[left + i];
    for (i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

llong merge_sort(int A[], int left, int right)
{
    llong v1, v2, v3;
    int mid;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        v1 = merge_sort(A, left, mid);
        v2 = merge_sort(A, mid, right);
        v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    int A[MAX];
    cin >> n;
    llong ans;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    ans = merge_sort(A, 0, n);

    cout << ans << endl;

    return 0;
}



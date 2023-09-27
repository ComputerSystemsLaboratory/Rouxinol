#include <iostream>
using namespace std;
#define MAX 500000
#define SENTINEL 2000000000

int L[MAX/2 + 2], R[MAX/2 + 2];
int cnt;

void merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void merge_sort(int A[], int left, int right)
{
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(int argc, char const *argv[])
{
    cnt = 0;
    int n, A[MAX];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    merge_sort(A, 0, n);

    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;

    cout << cnt << endl;;

    return 0;
}



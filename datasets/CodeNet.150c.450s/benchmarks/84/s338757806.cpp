#include<iostream>
using namespace std;

static const int INFTY = 2000000000;
static const int MAX_N = 200001;
static int L[MAX_N / 2 + 2], R[MAX_N / 2 + 2];

int64_t merge(int A[], int left, int mid, int right) {
    auto n1 = mid - left;
    auto n2 = right - mid;
    auto i = 0;

    for (i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1] = INFTY;
    R[n2] = INFTY;

    i = 0;
    int j = 0;
    int64_t cnt = 0;

    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i += 1;
        } else {
            A[k] = R[j];
            j += 1;
            cnt += n1 - i;
        }
    }
    return cnt;
}

int64_t mergeSort(int A[], int left, int right) {
    int64_t inv = 0;
    if (left + 1 < right)
    {
        auto mid = (left + right) / 2;
        inv += mergeSort(A, left, mid);
        inv += mergeSort(A, mid, right);
        inv += merge(A, left, mid, right);
    }
    return inv;
}

int main() {

    int A[MAX_N], N, i = 0;
    cin >> N;
    for(i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int64_t inv = mergeSort(A, 0, N);

    cout << inv << endl;

    return 0;
}

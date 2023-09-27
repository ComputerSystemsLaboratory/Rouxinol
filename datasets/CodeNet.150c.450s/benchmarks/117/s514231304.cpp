#include <iostream>
#include <vector>
#include <climits>

using namespace std;

template<typename T>
int32_t merge(vector<T> &A, int32_t left, int32_t mid, int32_t right) {
    int32_t n1 = mid - left;
    int32_t n2 = right - mid;

    vector<T> L(n1+1);
    vector<T> R(n2+1);
    for (int32_t i = 0; i < n1; i++) {
        L[i] = A[left+i];
    }
    for (int32_t i = 0; i < n2; i++) {
        R[i] = A[mid+i];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int32_t i = 0, j = 0, count = 0;
    for (int32_t k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        count++;
    }

    return count;
}

template<typename T>
int32_t merge_sort(vector<T> &A, int32_t left, int32_t right) {
    if (left + 1 < right) {
        int32_t mid = left + (right - left) / 2;
        int32_t count1 = merge_sort(A, left, mid);
        int32_t count2 = merge_sort(A, mid, right);
        int32_t count3 = merge(A, left, mid, right);
        return count1 + count2 + count3;
    }

    return 0;
}

int main() {
    int32_t n;

    cin >> n;
    vector<int32_t> S(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> S[i];
    }

    int32_t count = merge_sort(S, 0, n);
    for (int32_t i = 0; i < n; i++) {
        cout << S[i];
        if  (i == n-1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    cout << count << endl;

    return 0;
}
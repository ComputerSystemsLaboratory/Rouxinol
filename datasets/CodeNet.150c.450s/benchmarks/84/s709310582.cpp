#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; ++i)
#define IFOR(i,s,e) for (int i=s; i<e; --i)
#define ITER(v) v.begin(), v.end()

constexpr int MAX_N = 200'000;
constexpr int64_t MAX_VAL = 1e9+1;

int64_t merge(int64_t* A, const int& left, const int& mid, const int& right) {
    const int n1 = mid - left;
    const int n2 = right - mid;

    auto L = new int64_t[n1+1];
    auto R = new int64_t[n2+1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1] = MAX_VAL;
    R[n2] = MAX_VAL;

    int64_t count = 0;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            count += n1 - i;
        }
    }
    delete[] L;
    delete[] R;
    return count;
}

int64_t mergeSort(int64_t* A, const int& left, const int& right) {
    int64_t count = 0;
    if (left + 1 < right) {
        const int mid = (left + right) / 2;
        count += mergeSort(A, left, mid);
        count += mergeSort(A, mid, right);
        count += merge(A, left, mid, right);
        return count;
    }
    return 0;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int64_t* A = new int64_t[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int64_t count = mergeSort(A, 0, n);
    cout << count << endl;

    return 0;
}
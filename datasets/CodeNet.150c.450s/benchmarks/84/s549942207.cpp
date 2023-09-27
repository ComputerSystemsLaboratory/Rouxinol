#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <climits>

using namespace std;

long long merge(deque<int>& A, int left, int mid, int right) {
    long long result = 0;
    int n1 = mid - left;
    int n2 = right - mid;

    // L[0...n1], R[0...n2] を生成
    deque<int> L;
    deque<int> R;
    for (int i = 0; i < n1; ++i) {
        L.push_back(A[left + i]);
    }
    for (int j = 0; j < n2; ++j) {
        R.push_back(A[mid + j]);
    }

    int current = left;
    int j = 0;
    for (int i = 0; i < n1; ++i) {
        while ((j < n2) && (L[i] > R[j])) {
            A[current] = R[j];
            ++j;
            ++current;
        }
        A[current] = L[i];
        ++current;
        result += j;
    }
    while ((j < n2)) {
        A[current] = R[j];
        ++j;
        ++current;
    }

#if 0
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);
    for (int i = 0; i < n2; ++i) {  // R[i]
        for (int j = 0; j < n1; ++j) {  // L[j]
            if (R[i] < L[j]) {
                ++result;
                //cout << " " << R[i] << " " << L[j] << endl;
            }
        }
    }
    int i = 0;
    int j = 0;
    for (int k = left; k < right; ++k) {
        cout << "   " << R[i] << " " << L[j] << endl;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            ++i;
        }
        else {
            A[k] = R[j];
            ++j;
            ++result;
            cout << " " << R[i] << " " << L[j] << endl;
        }

    }
#endif

    return result;
}

long long numberOfInversions(deque<int>& a, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        long long l = numberOfInversions(a, left, mid);
        long long r = numberOfInversions(a, mid, right);
        long long m = merge(a, left, mid, right);
        return l + r + m;
    }
    else {
        return 0;
    }
}

int main(int argc, char* argv[]) {
    deque<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    cout << numberOfInversions(a, 0, n) << endl;
#if 0
    cout << a[0];
    for (int i = 1; i < n; ++i) {
        cout << " " << a[i];
    }
    cout << endl;
#endif
    return 0;
}


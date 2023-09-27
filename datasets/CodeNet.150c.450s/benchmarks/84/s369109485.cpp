#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = 1e9 + 7;

ll merge(vector<int> &A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1 + 1);
    vector<int> R(n2 + 1);
    for (int i = 0; i < n1; ++i) {
        L.at(i) = A.at(left + i);
    }
    for (int i = 0; i < n2; ++i) {
        R.at(i) = A.at(mid + i);
    }
    L.at(n1) = INF;
    R.at(n2) = INF;
    ll cnt = 0;
    int i = 0;
    int j = 0;
    for (int k = left; k < right; ++k) {
        if (L.at(i) <= R.at(j)) {
            A.at(k) = L.at(i);
            ++i;
        } else {
            A.at(k) = R.at(j);
            ++j;
            cnt += (mid - left) - i;
        }
    }
    return cnt;
}

ll mergeSort(vector<int> &A, int left, int right) {
    ll cnt = 0;
    if (right - left > 1) {
        int mid = (left + right) / 2;
        cnt += mergeSort(A, left, mid);
        cnt += mergeSort(A, mid, right);
        cnt += merge(A, left, mid, right);
    }
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A.at(i);
    }
    cout << mergeSort(A, 0, n) << endl;

    return 0;
}

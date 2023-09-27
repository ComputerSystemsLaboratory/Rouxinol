#include <iostream>

using namespace std;

long long cnt;
int A[200010], tmp[200010];

void margeSort(int l, int r) {
    if (r - l == 1) return;
    int m = (l + r) / 2;
    margeSort(l, m);
    margeSort(m, r);
    int i = 0;
    for (int il = l, ir = m; il < m || ir < r;)
        if (il < m)
            if (ir < r)
                tmp[i++] = A[il] > A[ir] ? (cnt += m - il, A[ir++]) : A[il++];
            else
                tmp[i++] = A[il++];
        else
            tmp[i++] = A[ir++];
    for (int j = 0; j < i; ++j) A[l + j] = tmp[j];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    margeSort(0, n);
    cout << cnt << endl;
    return 0;
}


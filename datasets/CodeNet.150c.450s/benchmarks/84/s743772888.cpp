#include<iostream>
#include<vector>
using namespace std;

long merge_sort(vector<int>& A, int l, int r) {
    long cnt = 0;
    if (l >= r) return 0;
    int m = (l + r) / 2;
    cnt += merge_sort(A, l    , m);
    cnt += merge_sort(A, m + 1, r);
    vector<int> B1(m - l + 2);
    for (int i = 0; i < m - l + 1; i++) B1[i] = A[i+l];
    B1[m-l+1] = 1e9 + 1;
    vector<int> B2(r - m + 1);
    for (int i = 0; i < r - m; i++) B2[i] = A[i+m+1];
    B2[r-m] = 1e9 + 1;
    int j1 = 0;
    int j2 = 0;
    for (int i = l; i <= r; i++) {
        if (B1[j1] <= B2[j2]) {
            A[i] = B1[j1++];
        } else {
            A[i] = B2[j2++];
            cnt += m - l + 1 - j1;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) cin >> a;
    cout << merge_sort(A, 0, n - 1) << endl;
    return 0;
}
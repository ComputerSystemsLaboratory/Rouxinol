#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll Merge(vector<int> &A, int n, int left, int mid, int right, vector<int> &R, vector<int> &L){
    ll cnt = 0;
    int SENTINEL = 2000000000;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++)    L[i] = A[left + i];
    for (int i = 0; i < n2; i++)    R[i] = A[mid + i];
    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++){
        if (L[i] <= R[j])   A[k] = L[i++];
        else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergeSort(vector<int> &A, int n, int left, int right, vector<int> &R, vector<int> &L){
    ll v1, v2, v3;
    if (left+1 < right){
        int mid = (left + right) / 2;
        v1 = mergeSort(A, n, left, mid, L, R);
        v2 = mergeSort(A, n, mid, right, L, R);
        v3 = Merge(A, n, left, mid, right, L, R);
        return v1 + v2 + v3;
    }
    else return 0;
}

int main(void){
    int MAX = 200000;
    vector<int> A(MAX), L(MAX/2+2), R(MAX/2+2);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    ll ans = mergeSort(A, n, 0, n, L, R);
    cout << ans << endl;
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

void merge_sort(vector<int>& A, int left, int right, int& cnt){
    if (left >= right) return;
    int mid = (left + right) / 2;
    merge_sort(A, left   , mid  , cnt);
    merge_sort(A, mid + 1, right, cnt);
    int A1[mid - left + 2];
    int A2[right - mid + 1];
    for (int i = 0; i < mid - left + 1; i++) {
        A1[i] = A[left+i];
    }
    A1[mid - left + 1] = 1e9 + 1;
    for (int i = 0; i < right - mid; i++) {
        A2[i] = A[mid+1+i];
    }
    A2[right - mid] = 1e9 + 1;
    int i1 = 0;
    int i2 = 0;
    for (int k = left; k <= right; k++) {
        cnt++;
        A[k] = (A1[i1] < A2[i2] ? A1[i1++] : A2[i2++]);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> S(n);
    for (auto& s : S) cin >> s;
    int cnt = 0;
    merge_sort(S, 0, n - 1, cnt);
    for (int i = 0; i < n; i++) {
        cout << S[i] << (i < n - 1 ? " " : "\n");
    }
    cout << cnt << endl;
    return 0;
}
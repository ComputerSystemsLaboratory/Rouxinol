#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int partition(vector<pair<char, int>>& A, int p, int r){
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].second > A[r].second) continue;
        swap(A[++i], A[j]);
    }
    swap(A[++i], A[r]);
    return i;
}
void quick_sort(vector<pair<char, int>>& A, int p, int r){
    if (p >= r) return;
    int q = partition(A, p, r);
    quick_sort(A, p, q - 1);
    quick_sort(A, q + 1, r);
}
void merge_sort(vector<pair<char, int>>& A, int left, int right){
    if (left >= right) return;
    int mid = (left + right) / 2;
    merge_sort(A, left   , mid  );
    merge_sort(A, mid + 1, right);
    pair<char, int> A1[mid   - left + 2];
    pair<char, int> A2[right - mid  + 1];
    for (int i = 0; i < mid - left + 1; i++) {
        A1[i] = A[left+i];
    }
    A1[mid - left + 1].second = 1e9 + 1;
    for (int i = 0; i < right - mid; i++) {
        A2[i] = A[mid+1+i];
    }
    A2[right - mid].second = 1e9 + 1;
    int i1 = 0;
    int i2 = 0;
    for (int k = left; k <= right; k++) {
        A[k] = (A1[i1].second <= A2[i2].second ? A1[i1++] : A2[i2++]);
    }
}
int main(){
    int n;
    cin >> n;
    vector<pair<char, int>> A1(n);
    vector<pair<char, int>> A2(n);
    for (int i = 0; i < n; i++) {
        cin >> A1[i].first >> A1[i].second;
        A2[i] = A1[i];
    }
    quick_sort(A1, 0, n - 1);
    merge_sort(A2, 0, n - 1);
    bool is_same = true;
    for (int i = 0; i < n; i++) {
        if (A1[i] != A2[i]) {
            is_same = false;
            break;
        }
    }
    cout << (is_same ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; i++) {
        cout << A1[i].first << " " << A1[i].second << endl;
    }
    return 0;
}
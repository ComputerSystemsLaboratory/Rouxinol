#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& A, int p, int r){
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= A[r]) {
            i++;
            swap(A[i], A[j]);
        }
    }
    i++;
    swap(A[i], A[r]);
    return i;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) cin >> a;
    int pos = partition(A, 0, n - 1);
    for (int i = 0; i < pos; i++) {
        cout << A[i] << " ";
    }
    cout << "[" << A[pos] << "] ";
    for (int i = pos + 1; i < n; i++) {
        cout << A[i] << (i < n - 1 ? " " : "\n");
    }
    return 0;
}
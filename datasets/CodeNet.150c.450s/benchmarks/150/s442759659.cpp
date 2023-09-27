#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void CountingSort(vector<int>& A, vector<int>& B){
    int n = *max_element(A.begin(), A.end()) + 1;
    vector<int> C(n, 0);
    for (const auto& a : A) C[a]++;
    for (int i = 1; i < n; i++) C[i] += C[i-1];
    for (const auto& a : A) {
        B[C[a]-1] = a;
        C[a]--;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) cin >> a;
    vector<int> B(n);
    CountingSort(A, B);
    for (int i = 0; i < n; i++) {
        cout << B[i] << (i < n - 1 ? " " : "\n");
    }
    return 0;
}
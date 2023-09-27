#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void counting_sort(vector<int>& A){
    int max_a = *max_element(A.begin(), A.end());
    vector<int> C(max_a + 1, 0);
    for (const auto& a : A) C[a]++;
    for (int i = 1; i < C.size(); i++) C[i] += C[i-1];
    vector<int> B(A.size());
    for (int i = A.size() - 1; i >= 0; i--) B[(C[A[i]]--)-1] = A[i];
    for (int i = 0; i < A.size(); i++) A[i] = B[i];
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) cin >> a;
    counting_sort(A);
    for (int i = 0; i < n; i++) {
        cout << A[i] << (i < n - 1 ? " " : "\n");
    }
    return 0;
}
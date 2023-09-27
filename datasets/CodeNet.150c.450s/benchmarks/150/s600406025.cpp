#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void coutingSort(vector<int>& A, vector<int>& B, int k){
    vector<int> C(k+1);
    fill(C.begin(), C.end(), 0);
    for(int i=0; i<A.size(); i++) C[A[i]]++;
    for(int i=1; i<=k; i++) C[i] += C[i-1];
    for(int i=A.size()-1; i>=0; i--) B[C[A[i]] -1] = A[i], C[A[i]]--;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++) cin >> A[i];
    int k = *max_element(A.begin(), A.end());
    coutingSort(A, B, k);
    for(int i=0; i<n; i++) cout << B[i] << " \n"[i==n-1]; 
    return 0;
}

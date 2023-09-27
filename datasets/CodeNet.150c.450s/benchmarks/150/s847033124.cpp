#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void counting_sort(vector<int> &A, int n){

    int k = *max_element(A.begin(), A.end());
    vector<int> B(n+1);
    vector<int> C(k+1);

    for(int i=0; i<k; i++) C[i] = 0;
    for(int j=0; j<n; j++) C[A[j]]++;
    for(int i=1; i<=k; i++) C[i] = C[i] + C[i-1];

    for(int j=n-1; j>=0; j--){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    for(int i=1; i<=n; i++){
        if(i != n){
            cout << B[i] << " ";
        }else{
            cout << B[i] << endl;
        }
    }
}

int main(){

    int n; cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];

    counting_sort(A,n);
    
    return 0;
}
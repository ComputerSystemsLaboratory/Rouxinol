#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &A, int n){
    int r = n;
    int x = A[r];
    int i = 0;

    for(int j=1; j<=r-1; j++){
        if(A[j] <= x){
            i++;
            swap(A[i], A[j]);
        }
    } 
    swap(A[i+1], A[r]);

    for(int k=1; k<i+1; k++) cout << A[k] << " ";
    cout << "[" << A[i+1] << "]" << " ";
    for(int k=i+2; k<=n; k++){
        if(k != n){
            cout << A[k] << " ";
        }else{
            cout << A[k] << endl;
        }
    }

    return i+1;
}

int main(){

    int n; cin >> n;
    vector<int> A(n+1);
    for(int i=1; i<=n; i++) cin >> A[i];

    partition(A, n);

    return 0;
}
#include <iostream>
using namespace std;

void swap(int* A, int p, int q){
    int reserve = A[p];
    A[p] = A[q];
    A[q] = reserve;
}

int main(){
    //input
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    
    //calculation
    int k = 0; //number of swaps
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(A[j] < A[j-1]){
                swap(A, j, j-1);
                k++;
            }
        }
    }
    
    //output
    for(int i=0;i<n-1;i++){
        cout << A[i] << " ";
    }
    cout << A[n-1] << endl;
    cout << k << endl;
}
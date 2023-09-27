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
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    //calculation
    int k = 0; //number of swaps
    int mini;
    for(int i=0; i<n; i++){
        mini = i;
        for(int j=i; j<n; j++){
            if(A[j] < A[mini]){
                mini = j;
            }
        }
        if(i != mini){
            swap(A, i, mini);
            k++;
        }
    } 
    
    //output
    for(int i=0; i<n-1; i++){
        cout << A[i] << " ";
    }
    cout << A[n-1] << endl;
    cout << k << endl;
}
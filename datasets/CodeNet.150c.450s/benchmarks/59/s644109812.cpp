#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int A[1001];
    int num;
    for(int i=0;i<1001;i++){
        A[i] = 0;
    }
    
    cin >>num;
    
    for(int i=0;i<num;i++){
        cin>>A[i];
    }
    void insertionSort(int* A,int N);
    insertionSort(A,num);
    
    return 0;
}

void insertionSort(int* A,int N){
    int key,j;
    
    for(int k=0;k<N-1;k++){
        cout <<A[k] <<" ";
    }
    cout <<A[N-1];
    cout <<endl;
    
    for(int i=1;i<N;i++){
        key = A[i];
        j = i -1;
        while(j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        
        for(int k=0;k<N-1;k++){
            cout <<A[k] <<" ";
        }
        cout <<A[N-1];
        cout <<endl;
    }
}
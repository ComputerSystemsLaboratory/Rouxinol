#include <iostream>
using namespace std;

int selectionSort(int A[], int N){
    int sw = 0;
    int minv;
    bool flag;
    
    for(int i = 0; i < N-1; i++){
        minv = i;
        flag = 0;
        for(int j = i+1; j < N; j++){
            if(A[minv] > A[j]){
                minv = j;
                flag = 1;
            }
        }
        if(flag){
            swap(A[i],A[minv]);
            sw++;
        }
    }
    
    return sw;
}

int main(){
    int A[100], N, sw;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    
    sw = selectionSort(A, N);
    
    for(int i = 0; i < N; i++){
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;
    return 0;
}
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int count_sw = 0;

void ss(int A[],int N){
    for (int i = 0; i < N-1; i++) {
        int min = A[i];
        int k = i;
        for (int j = i+1; j < N; j++) {
            if (min > A[j]) {
                min = A[j];
                k = j;
            }
        }
        if (i != k) {
            swap(A[k],A[i]);
            count_sw++;
        }
    }
}

int main(){
    int N;
    cin >> N;
    
    int *A;
    A = (int *)malloc(sizeof(int));
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    ss(A,N);
    
    for(int i = 0; i < N; i++){
        cout << A[i];
        if (i != N-1){
            cout << " ";
        }
    }
    cout << endl;
    
    cout << count_sw << endl;
    return 0;
}
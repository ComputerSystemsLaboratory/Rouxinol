#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

void printline(int A[],int N){
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N-1) {
            cout << " ";
        }
    }
    cout << endl;
}

void insort(int A[],int N){
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] <= A[j]) {
                int a = A[i];
                for (int k = i; k > j; k--) {
                    A[k] = A[k-1];
                }
                A[j] = a;
                break;
            }
        }
        printline(A,N);
    }
}

int main(){
    int N,*A;
    cin >> N;
    A = (int *)malloc(sizeof(int)*N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    insort(A,N);
    
    return 0;
}
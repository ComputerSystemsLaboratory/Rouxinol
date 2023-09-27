#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int count_sw = 0;

void sort(int A[],int N){
    for (int i = 0; i < N; i++) {
        for (int j = N-1; j > i; j--) {
            if (A[j] < A[j-1]) {
                swap(A[j],A[j-1]);
                count_sw++;
            }
        }
    }
}


int main(){
    int N,*A;
    cin >> N;
    
    A = (int *)malloc(sizeof(int)*N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A,N);
    
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N-1) cout << " ";
    }
    cout << endl;
    
    cout << count_sw << endl;
    
    
    return 0;
}
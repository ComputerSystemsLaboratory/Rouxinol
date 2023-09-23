#include<iostream>
using namespace std;

inline void show(int* a, int n){
    for(int i = 0; i < n - 1; i++) cout << a[i] << " ";
    cout << a[n - 1] << endl;
}

void InsertionSort(int* a, int n){

    int i, j, v;

    for(i = 1; i < n; i++){
        v = a[i];
        j = i - 1;
        while((j >= 0) && (a[j] > v)){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
        show(a, n);
    }
}

int main(){

    int N, A[100];

    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    show(A, N);
    InsertionSort(A, N);

    return 0;
}
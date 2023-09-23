#include<iostream>
using namespace std;

void show(int* a, int n){
    
    int i;
    for(i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

void insertionSort(int* a, int n){

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

    int N;
    int* A;
    cin >> N;

    A = new int [N];
    if(A == NULL) return 0;

    for(int i = 0; i < N; i++) cin >> A[i];
    show(A, N);
    insertionSort(A, N);

    delete [] A;

    return 0;
}
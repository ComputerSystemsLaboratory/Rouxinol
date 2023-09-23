#include <iostream>
using namespace std;

void print(int A[], int N){
    for(int i = 0; i < N - 1; ++i){
        cout << A[i] << " ";
    }
    cout << A[N - 1] << "\n";
}

void insertionSort(int A[], int N){
    int tmp;
    for(int i = 1; i < N; ++i){
        int tmp = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > tmp){
            A[j + 1] = A[j];
            --j;
        }
        A[j + 1] = tmp;
        print(A, N);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    int A[100];

    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> A[i];
    }

    print(A, N);
    insertionSort(A, N);

    return 0;
}

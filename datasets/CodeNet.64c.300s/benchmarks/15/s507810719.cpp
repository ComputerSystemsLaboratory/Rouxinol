#include <iostream>
using namespace std;

void printA(int A[], int N){
    for(int i = 0; i < N - 1; ++i){
        cout << A[i] << " ";
    }
    cout << A[N - 1] << "\n";
}

int selectionSort(int A[], int N){
    int nSwap = 0;

    for(int i = 0; i < N - 1; ++i){
        int minIdx = i;
        for(int j = i; j < N; ++j){
            if(A[minIdx] > A[j]){
                minIdx = j;
            }
        }
        if(i != minIdx){
            std::swap(A[i], A[minIdx]);
            ++nSwap;
        }
    }

    printA(A, N);
    return nSwap;
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

    cout << selectionSort(A, N) << "\n";

    return 0;
}

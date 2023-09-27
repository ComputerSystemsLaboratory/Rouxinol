#include <iostream>
using namespace std;

void printA(int A[], int N){
    for(int i = 0; i < N - 1; ++i){
        cout << A[i] << " ";
    }
    cout << A[N - 1] << "\n";
}

int bubbleSort(int A[], int N){
    int nSwap = 0;
    bool flg = true;

    for(int i = 0; flg; ++i){
        flg = false;
        for(int j = N - 1; j >= i + 1; --j){
            if(A[j] < A[j - 1]){
                swap<int>(A[j], A[j - 1]);
                ++nSwap;
                flg = true;
            }
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

    cout << bubbleSort(A, N) << "\n";

    return 0;
}

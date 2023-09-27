#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertion_Sort(int A[], int N){
    for(int j = 1; j < N; j++){
        int v = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > v){
            A[i + 1] = A[i];
            i--;
        }            
        A[i + 1] = v;
        for(int k = 0; k < N-1; ++k) {
            cout << A[k] << " "; 
        }
        cout << A[N-1] << endl;
    }
}

int main(){
    int N;
    cin >> N;
    int A[110];
    for(int i = 0; i < N; ++i) cin >> A[i];
    for(int i = 0; i < N-1; ++i) cout << A[i] << " ";
    cout << A[N-1] << endl;
    insertion_Sort(A, N);
    return 0;

}

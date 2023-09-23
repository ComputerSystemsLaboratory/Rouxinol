#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int selection_Sort(int A[], int N){
    int res = 0;
    for(int i = 0; i < N-1; ++i){
        int min_j = i + 1;
        for(int j = i +1; j < N; ++j){
            if(A[min_j] > A[j]) min_j = j;
        }
        if( A[i] > A[min_j]){
            swap(A[i], A[min_j]);
            ++res;
        }
    }
    return res;
}

int main(){
    int N;
    cin >> N;
    int A[110];
    for(int i = 0; i < N; ++i) cin >> A[i];
    int res = selection_Sort(A, N);
    for(int i = 0; i < N-1; ++i) cout << A[i] << " ";
    cout << A[N-1] << endl;
    cout << res << endl;
    return 0;

}

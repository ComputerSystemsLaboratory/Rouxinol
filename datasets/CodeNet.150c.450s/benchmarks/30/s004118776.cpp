#include <iostream>
#include <vector>
using namespace std;

int SelectionSort(vector<int> &A){
    int N = A.size();
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        int minj = i;
        int flag = 0;
        for(int j = i; j < N; ++j){
            if(A[j] < A[minj]){
                minj = j;
                flag = 1;
            }
        }
        if(flag){
            int tmp = A[i];
            A[i] = A[minj];
            A[minj] = tmp;
            ++cnt;
        }
    }
    return cnt;
}
int main(void){
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for(int i = 0; i < N; ++i)
        cin >> A[i];
    int cnt = SelectionSort(A);
    for(int i = 0; i < N; ++i){
        cout << A[i];
        if(i != N - 1)
            cout << " ";
    }
    cout << endl << cnt << endl;
    return 0;
}
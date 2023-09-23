#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;
//flagを用いたバブルソート
int bubbleSort(int A[], int N){
    int sw = 0;
    bool flag = 1;
    for(int i = 0; flag; i++){
        flag = 0;
        for(int j = N - 1; j >= i + 1; j--){
            if(A[j] < A[j - 1]){
                //隣接要素を交換する
                swap(A[j], A[j - 1]);
                flag = 1;
                sw++;
            }
        }
    }
    return sw;
}

int main(){
    int A[100], N, sw;
    cin >> N;
    for(int i = 0;i < N; i++) cin >> A[i];

    sw = bubbleSort(A, N);

    for(int i = 0; i < N; i++){
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;

	return 0;
}

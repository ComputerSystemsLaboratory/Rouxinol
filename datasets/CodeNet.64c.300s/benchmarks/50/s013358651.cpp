#include<iostream>
#include<algorithm>
using namespace std;
int cnt;
void BubbleSort(int A[], int N){
    bool flag = true;
    while(flag){
        flag = false;
        for(int j = N-1; j >= 1; j--){
            if(A[j] < A[j-1]){
                swap(A[j], A[j-1]);
                cnt++;
                flag = true;
            }
        }
    }
}
 
int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    cnt = 0;
    BubbleSort(A, N);
    for(int i = 0; i < N; i++){
        cout << A[i];
        if(i < N-1)
            cout << " ";
        else
            cout << endl;
    }
    cout<< cnt << endl;
}
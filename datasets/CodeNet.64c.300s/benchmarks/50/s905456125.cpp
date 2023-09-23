#include "iostream"
#include "algorithm"
using namespace std;
void bubbleSort(int A[], int N);
void trace(int A[], int N);
int MAX = 100;

int main(int argc, char const *argv[]) {
    int A[100];
    int N;

    cin >> N;
    for(int i = 0; i < N; ++i) cin >> A[i];
    bubbleSort(A, N);
    return 0;
}

void bubbleSort(int A[], int N){
    int flag = 1;
    int i = 0;
    int count = 0;
    while(flag) {
        flag = 0;
        for (int j = N-1; j > i; j--) {
            if(A[j] < A[j-1]){
                swap(A[j], A[j-1]);
                count++;
                flag = 1;
            }
        }
        i++;
    }
    trace(A, N);
    cout << count << endl;
}

void trace(int A[], int N){
    for (int i = 0; i < N; i++){
        if(i > 0){
            cout << ' ';
        }
        cout << A[i];
    }
    cout << endl;
}
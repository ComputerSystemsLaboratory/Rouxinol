#include <iostream>

using namespace std;

int bubbleSort(int*,int);
void trace(int*, int);

#define MAXDATA 100

int main(){
    int N;
    int i;
    int sw;
    int A[MAXDATA];

    cin >> N;
    
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sw = bubbleSort(A, N);

    trace(A,N);
    cout << endl;

    cout << sw;

    cout << endl;

}

int bubbleSort(int *A, int N) {
    int flag = 1;
    int tmp;
    int j;
    int sw = 0;

    while (flag) {
        flag = 0;
        for (j = N-1; j > 0; j--) {
            if (A[j] < A[j-1]) {
                tmp = A[j-1];
                A[j-1] = A[j];
                A[j] = tmp;
                flag = 1;
                sw++;
            }
        }
    }
    return sw;
}

void trace(int *A, int N) {
    int i;
    
    for (i = 0;i < N; i++) {
        if (i) {
            cout << " ";
        }
        cout << A[i];
    }
}
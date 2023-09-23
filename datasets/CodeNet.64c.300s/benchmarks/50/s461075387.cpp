#include<iostream>
using namespace std;

int bubbleSort(int A[], int n){
    bool flag = 1;
    int sw = 0;
    while(flag) {
        flag = 0;
        for(int j = n - 1; j >= 1; j--) {
            if(A[j] < A[j - 1]) {
                int temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = 1;
                sw++;
            }
        }
    }
    return sw;
}

int main() {
    int A[100], n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int sw = bubbleSort(A, n);

    for(int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;
    return 0;
}
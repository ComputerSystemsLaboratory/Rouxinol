#include <iostream>
using namespace std;
void printA(int A[], int n){
    for (int k = 0; k < n; k++){
        if (k != n - 1){
            cout << A[k] << " ";
        }else{
            cout << A[n - 1] << endl;
        }
    }
}
int main(void){
    int n;
    cin >> n;
    int A[n];
    // A???????????????
    for (int i = 0; i < n; i++){
        int item;
        cin >> item;
        A[i] = item;
    }
    printA(A, n);
    // insertion sort
    for (int i = 1; i < n; i++){
        int key;
        key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        printA(A, n);
    }
}
#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& A) {
    for (auto i = 0; i < A.size(); i++) {
        cout << (i ? " " : "") << A[i];
    }
    cout << endl;
}

void insertionSort(vector<int>& A) {
    for (auto i = 1; i < A.size(); i++) {
        int v = A[i];
        int j = i-1;
        while (j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;

        printArray(A);
    }
}

int main(void) {
    int n;
    cin >> n;

    vector<int> ary(n);
    for (int i = 0; i < n; i++) {
        cin >> ary[i];
    }

    printArray(ary);
    insertionSort(ary);

    return 0;
}
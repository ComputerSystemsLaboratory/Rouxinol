#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int main() {
    int count, A[1000];
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> A[i];
    }

    int tradeCount = 0;
    for (int i = 0; i < count; i++) {
        for (int j = count - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                int swap = A[j - 1];
                A[j - 1] = A[j];
                A[j] = swap;
                tradeCount++;
            }
        }
    }

    for (int j = 0; j < count; j++) {
        if (j > 0) cout << " ";
        cout << A[j];
    }
    cout << endl;
    cout << tradeCount << endl;

   
    /***
    for (int i = 0; i < count; i++) {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;

        for (int j = 0; j < count; j++) {
            if (j > 0) cout << " ";
            cout << A[j];
        }
        cout << endl;
    }
    ***/
}
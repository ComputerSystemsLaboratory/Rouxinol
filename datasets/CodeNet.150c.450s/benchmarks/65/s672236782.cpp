#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string A[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=n-1; j > i; j--) {
            if ((A[j][1] - '0') < (A[j-1][1] - '0')) {
                string t=A[j]; A[j]=A[j-1]; A[j-1]=t;
            }
        }
    }
}

void selectionSort(string A[], int n) {
    for (int i=0; i<n-1; i++) {
        int mini = i;
        for (int j=i+1; j<n; j++) {
            if ((A[j][1] - '0') < (A[mini][1] - '0')) mini = j;
        }
        string t=A[mini]; A[mini]=A[i]; A[i]=t;
    }
}

void pp(string A[], int n) {
    for (int i=0; i<n; i++) {
        cout << A[i];
        if (i < n-1) cout << " ";
    }
    cout << "\n";
}
int main ()
{
    int n;
    cin >> n;
    string A[36];
    string B[36];
    string S[36];
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n; i++) B[i] = A[i];
    for (int i=0; i<n; i++) S[i] = A[i];
    bubbleSort(B, n);
    selectionSort(S, n);
    pp(B, n);
    cout << "Stable\n";
    pp(S, n);
    bool stable = true;
    for (int i=0; i<n; i++) {
        if (B[i] != S[i]) stable = false;
    }
    if (stable) {
        cout << "Stable\n";
    } else {
        cout << "Not stable\n";
    }
    return 0;
}
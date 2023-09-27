//Longest Increasing Subsequence
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n], L[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    L[0] = A[0];
    int length = 1;

    for(int i = 1; i < n; i++) {
        if(L[length - 1] < A[i]) L[length++] = A[i];
        else {
            *lower_bound(L, L + length, A[i]) = A[i];
        }
    }
    cout << length << endl;
}

#include <iostream>
using namespace std;

int main()
{
    const int MAX_VALUE = 10000;

    int n;
    cin >> n;

    int A[n + 1], B[n + 1], C[MAX_VALUE + 1];
    for (int i = 0; i <= MAX_VALUE; i++) {
        C[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        C[A[i]]++;
    }
    for (int i = 1; i <= MAX_VALUE; i++) {
        C[i] += C[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        B[C[A[i]]--] = A[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << B[i] << (i < n ? " " : "\n");
    }
    return 0;
}
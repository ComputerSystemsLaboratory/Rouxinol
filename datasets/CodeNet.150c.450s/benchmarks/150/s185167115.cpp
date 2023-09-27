#include <bits/stdc++.h>
using namespace std;
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define MAX 2000001
#define VMAX 10000

int main() {
    unsigned short *A, *B;

    int C[VMAX + 1];
    int n, i, j;
    scanf("%d", &n);
    A = (unsigned short *)malloc(sizeof(short) * n + 1);
    B = (unsigned short *)malloc(sizeof(short) * n + 1);
    for (i = 0; i <= VMAX; i++) {
        C[i] = 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%hu", &A[i + 1]);
        C[A[i + 1]]++;
    }
    for (i = 1; i <= VMAX; i++) {
        C[i] = C[i] + C[i - 1];
    }
    for (j = 1; j <= n; j++) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    for (i = 1; i <= n; i++) {
        if (i > 1) {
            cout << " ";
        }
        cout << B[i];
    }
    cout << endl;
    return 0;
}

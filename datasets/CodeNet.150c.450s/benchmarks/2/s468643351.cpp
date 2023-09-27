#include <bits/stdc++.h>
using namespace std;
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define MAX 100000

int A[MAX], n;

int partition(int p, int r) {
    int x, i, j;
    x = A[r];
    i = p - 1;
    for (j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main() {
    int i, q;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    q = partition(0, n - 1);
    for (i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        if (i == q) {
            cout << "[";
        }
        cout << A[i];
        if (i == q) {
            cout << "]";
        }
    }
    cout << endl;
    return 0;
}

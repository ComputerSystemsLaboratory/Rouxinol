#include <bits/stdc++.h>
#define lp(n) for(int i = 0; i < n; i++)
#define lpp(i, n) for(int i = 0; i < n; i++)

int A[2000001];
int B[2000001];
int C[10001];
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    
    lp(n) {
      cin >> A[i];
      C[A[i]]++;
    }
    for(int i = 1; i < 10001; i++) C[i] = C[i] + C[i-1];
    for(int i = n-1; i >= 0; i--) {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
    for(int i = 1; i <= n; i++) cout << B[i] << ((i == n)?"\n":" ");
    return 0;
}





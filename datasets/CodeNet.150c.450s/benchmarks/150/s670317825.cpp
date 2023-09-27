#include <bits/stdc++.h>
using namespace std;
static const int MAX = 2000005;
static const int RANGE = 10005;
int A[MAX], C[RANGE], B[MAX];


void countingSort(int A[], int B[], int k, int n) {
    for (int j = 0; j < n; j++) C[A[j]]++; // 配列Cにそれぞれの数が何回現れるかを記録
    for (int i = 1; i <= k; i++) C[i] += C[i-1]; // 配列Cをある数以下の出現回数に直す
    for (int j = n-1; j >= 0; j--) { // 配列Cの最後から配列Bに移していく 
        B[C[A[j]] - 1] = A[j];
        C[A[j]]--;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i]; // 0~n-1に格納
    countingSort(A, B, RANGE, n);
    for (int i = 0; i < n-1; i++) cout << B[i] << " ";
    cout << B[n-1] << endl;
    
    return 0;
}

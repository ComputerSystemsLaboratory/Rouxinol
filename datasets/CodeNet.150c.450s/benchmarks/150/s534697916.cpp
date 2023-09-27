#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> C(10010010);
int n;

void CountingSortx(vector<int> &A, vector<int> &B, int k){
    rep(i, k+1){
        C[i] = 0;
    }

    for (int i = 1; i <= n; i++){
        C[A[i]]++;
    }

    for (int i = 1; i <= k; i++){
        C[i] = C[i] + C[i-1];
    }

    for (int i = n; i > 0; i--){
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}

int main() {
    cin >> n;
    vector<int> A(n+1), B(n+1);
    for (int i = 1; i <= n ; i++){
        cin >> A[i];
    }

    CountingSortx(A, B, 10000);
    
    for (int i = 1; i <= n ; i++){
        cout << B[i];
        if(i == n){
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}

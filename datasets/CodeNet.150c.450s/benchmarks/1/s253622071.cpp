#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int L[100000];
int A[100000];
int n;

int LIS() {
    L[0] = A[0];
    int len = 1;
    for (int i = 1; i < n; i++){
        if(L[len-1] < A[i]){
            L[len++] = A[i];
        } else {
            *lower_bound(L, L+len, A[i]) = A[i];
        }
    }
    return len;
}

int main() {
    cin >> n;
    rep(i, n){
        cin >> A[i];
    }

    cout << LIS() << endl;

    return 0;
}

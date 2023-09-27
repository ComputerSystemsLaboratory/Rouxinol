/**
 *  O(n)
 **/
#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// data
int n;
const int MAX_N = 2e6, MAX_A = 1e4;
int A[MAX_N], B[MAX_N], C[MAX_A+1];

int main(){
    cin >> n;
    rep(i, n){
        cin >> A[i];
        C[A[i]]++;
    } 

    REP(i, 1, MAX_A+1){
        C[i] = C[i-1] + C[i];
    }

    rep(i, n){
        B[--C[A[i]]] = A[i];
    }
    rep(i, n){
        cout << B[i] << (i<n-1?" ": "\n");
    }
}

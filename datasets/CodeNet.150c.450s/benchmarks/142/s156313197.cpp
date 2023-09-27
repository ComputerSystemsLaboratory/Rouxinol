#include <bits/stdc++.h>
using namespace std;

long long N, K, A[1 << 18];
double B[1 << 18], M[1 << 18];

int main() {
    cin >> N >> K;
    for (int i=1; i <= N; i++) cin >> A[i];
    for (int i=1; i <= N; i++) B[i] = B[i-1] + log10(A[i]);
    for (int i=K; i <= N; i++) M[i] = B[i] - B[i-K];

    for (int i=K+1; i <= N; i++){
        if(M[i-1] + 1e-10 < M[i]){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
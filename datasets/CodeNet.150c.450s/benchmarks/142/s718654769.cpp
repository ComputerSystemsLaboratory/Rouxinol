#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=K; i<N; i++) cout << (A[i-K] < A[i] ? "Yes" : "No") << endl;
    return 0;
}

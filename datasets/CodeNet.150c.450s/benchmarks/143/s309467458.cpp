#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++)
        cin >> A[i];
    int Q;
    cin >> Q;
    vector<int> B(Q),C(Q);
    for(int i=0;i<Q;i++)
        cin >> B[i] >> C[i];

    int D[100001] = {0};
    for(int i=0;i<N;i++){
        D[A[i]]++;
    }

    ll sum = 0;
    for(int i=0;i<N;i++)
        sum += A[i];

    for(int i=0;i<Q;i++){
        if(D[B[i]] > 0){
            sum += (C[i] - B[i]) * D[B[i]];
            D[C[i]] += D[B[i]];
            D[B[i]] = 0;
        }
        cout << sum << endl;
    }
    return 0;
}
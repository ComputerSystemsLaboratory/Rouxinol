#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N ; i++)
    {
        cin >> A[i] ;
    }
    int Q;
    cin >> Q;
    vector<int> B(Q);
    vector<int> C(Q);
    for(int i = 0 ; i < Q; i++)
    {
        cin >> B[i] >> C[i];
    }
    vector<long long> sum(Q+1);
    vector<int> math(100010);
    for(int i = 0; i < N ; i++)
    {
        sum[0] = sum[0] + A[i];
        math[A[i]]++;
    }
    for(int i = 0; i < Q;i++)
    {
        sum[i+1] = sum[i] + (C[i]-B[i])*math[B[i]];
        math[C[i]] = math[C[i]]+math[B[i]];
        math[B[i]] = 0;
    }
    for(int i = 1; i <= Q;i++)
    {
        cout << sum[i] << endl;
    }

}
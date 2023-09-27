#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)

int main(){
    long long H,W,Q,K,N,x,max=0,sum=0;
    cin >> N;
    vector<long>A(N);
    vector<long>cnt(100000,0);
    FOR(i,N){
        cin >> A[i];
        cnt[A[i]-1]++;
        sum += A[i];
    }
    cin >> Q;
    vector<long>B(Q),C(Q);
    FOR(i,Q)cin >> B[i] >> C[i];

    FOR(i,Q){
        x = cnt[B[i]-1];
        if(x != 0){
            cnt[B[i]-1] = 0;
            cnt[C[i]-1] += x;
            sum +=  x*(C[i]-B[i]);
        }
        cout << sum << endl;
    }


}

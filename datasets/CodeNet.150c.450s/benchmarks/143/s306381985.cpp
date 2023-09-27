#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> A, long long Q, std::vector<long long> B, std::vector<long long> C){
    long long ans = accumulate(A.begin(), A.end(), 0LL);
    map<long long, long long> mp;
    for(auto a: A) mp[a] += 1;
    for(int i = 0; i < Q; ++i){
        ans = ans - B[i] * mp[B[i]] + C[i] * mp[B[i]];
        mp[C[i]] += mp[B[i]];
        mp[B[i]] = 0;
        cout << ans << endl;
    }
    return;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> B(Q);
    std::vector<long long> C(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(A), Q, std::move(B), std::move(C));
    return 0;
}

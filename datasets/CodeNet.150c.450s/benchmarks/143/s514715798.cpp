#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<map>
#include<utility>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL<<60;

typedef pair<ll,ll> Pair;
int main(){

ll N,Q;
ll sum = 0;

cin >> N;

vector<ll> A(N);
vector<ll> cnt(100001,0);

for(ll i = 0;i < N;++i){
    cin >> A[i];
    sum += A[i];
    ++cnt[A[i]];
}

cin >> Q;

vector<ll> B(Q);
vector<ll> C(Q);
vector<ll> S(Q,0);

for(ll i = 0;i < Q;++i){

    cin >> B[i] >> C[i];

    sum += (C[i] - B[i])*cnt[B[i]];
    cnt[C[i]] += cnt[B[i]];
    cnt[B[i]] = 0;
    
    S[i] = sum;

}

for(ll i = 0;i < Q;++i){

    cout << S[i] << endl;

}

return 0;

}

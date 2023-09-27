#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL<<60;

typedef pair<ll,ll> Pair;
int main(){

ll N,Q;
ll sum = 0;

cin >> N;

ll A;
vector<ll> cnt(100001,0);

for(ll i = 0;i < N;++i){
    cin >> A;
    sum += A;
    ++cnt[A];
}

cin >> Q;

ll B,C;
vector<ll> S(Q,0);

for(ll i = 0;i < Q;++i){

    cin >> B >> C;

    sum += (C - B)*cnt[B];
    cnt[C] += cnt[B];
    cnt[B] = 0;
    
    S[i] = sum;

}

for(ll i = 0;i < Q;++i) cout << S[i] << endl;

return 0;

}

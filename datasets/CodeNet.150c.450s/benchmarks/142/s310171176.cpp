#include<bits/stdc++.h>

#define _GLIBCXX_DEBUG
#define all(v) (v).begin(),(v).end()

using namespace std;

using ll=long long;
using pii=pair<int, int>;
using vi=vector<int>;

const ll LINF=1LL<<60;
const int INF=1<<29;
const int MOD=2019;

int main(){
    int N, K; cin >> N >> K;
    vector<ll> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=K+1; i<=N; i++){
        if(A[i-1] > A[i-1-K]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define ll long long
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(ll i = 0; i < n; i++)
const ll INF = 1LL << 60;

int main(){
    int N, K; cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    int first = 0, last = K;
    rep(i, N - K){
        if(last - first != K){
            cout << "No" << endl;
            continue;
        }
        if(A[first] >= A[last]) cout << "No" << endl;
        else cout << "Yes" << endl;
        first++;
        last++;
    }
} 
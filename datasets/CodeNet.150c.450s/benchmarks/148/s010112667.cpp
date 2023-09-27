#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const static ll INF = 1e15;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// __uint128_t
const ll MOD = 1e9+7;

int main(){
    ll N; cin >> N;
    map<string, ll> M;
    for(int i = 0; i < N; i++){
        string S; cin >> S; M[S]++;
    }
    vector<string> S = {"AC", "WA", "TLE", "RE"};
    for(auto s : S){
        cout << s << " x " << M[s] << endl;
    }

}
// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int D;
    cin >> D;
    vector<int> C(26);
    rep(i, 26) cin >> C[i];
    Graph S(D, vector<int>(26));
    rep(i, D){
        rep(j, 26) cin >> S[i][j];
    }

    vector<int> T(D), last(26, -1);
    rep(i, D){
        cin >> T[i];
        T[i]--;
    } 
    
    ll sum = 0;
    rep(i, D){
        sum += S[i][T[i]];
        last[T[i]] = i;
        rep(j, 26){
            sum -= C[j] * (i - last[j]);
        }
        cout << sum << endl;
        //cout << max(1000000 + sum, 0LL) << endl;
    }

}
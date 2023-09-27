// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
const ll INF = 1000000007;

vector< vector<ll> > M(110, vector<ll>(110, 0));
vector<ll> P(110);
int N;

ll multiplication(){
    for(int l = 2; l <= N; l++){
        for(int i = 1; i <= N - l + 1; i++){
            int j = i + l - 1;
            M[i][j] = INF * INF;
            for(int k = i; k < j; k++){
                M[i][j] = min(M[i][j], M[i][k] + M[k+1][j] + P[i-1] * P[k] * P[j]);
            }
        }
    }
    return M[1][N];
}

int main(){
    cin >> N;
    rep(i, N){
        cin >> P[i] >> P[i+1];
    }
    cout << multiplication() << endl;
}

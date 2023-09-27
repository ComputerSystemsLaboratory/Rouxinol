#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> Array;
typedef vector<Array> Graph;
typedef pair<double, double> pdd;
const ull mod = 1000000000 + 7;
#define REP(i,n) for(int i=0;i<(int)n;++i)

int main(){
    int N, W;
    cin >> N >> W;
    int N_MAX = 110;
    int W_MAX = 10010;
    int v[N_MAX];
    int w[N_MAX];
    REP(i, N){
        cin >> v[i] >> w[i];
    }
    int DP[2][W_MAX];
    REP(i, N){
        REP(j, W+1){
            if(j<w[i]){
                DP[(i+1)&1][j] = DP[i&1][j];
            }else{
                DP[(i+1)&1][j] = max(DP[i&1][j], DP[i&1][j-w[i]] + v[i]);
            }
        }
    }
    cout << DP[N&1][W] << endl;
    return 0;
}
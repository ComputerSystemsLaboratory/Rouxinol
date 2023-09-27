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
    int W_MAX = 20010;
    int v[N_MAX];
    int w[N_MAX];
    REP(i, N){
        cin >> v[i] >> w[i];
    }
    int DP[W_MAX];
    REP(i, N){
        for (int j=W;j>=0;j--){
            if(j + w[i] <= W){
                DP[j+w[i]] = max(DP[j+w[i]], DP[j] + v[i]);
            }
        }
    }
    cout << DP[W] << endl;
    return 0;
}
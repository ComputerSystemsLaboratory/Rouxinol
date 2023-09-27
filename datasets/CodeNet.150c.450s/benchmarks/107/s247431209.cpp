#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <random>
#include <chrono>
#include <queue>
#include <ctime>
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
#define fs first
#define sc second
#define INF 1000000000
#define MOD 1000000007
#define EPS 0.00000001


int main(){
    string S, T; cin >> S >> T;
    int N = (int)S.size();
    int M = (int)T.size();
    vector<vector<int>> dp(N+1, vector<int>(M+1));
    
    for(int i=0; i<N+1; i++){
        dp[i][0] = i;
    }
    for(int j=0; j<M+1; j++){
        dp[0][j] = j;
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int cost = 1;
            if(S[i]==T[j]) cost = 0;
            dp[i+1][j+1] = min(dp[i][j]+cost, min(dp[i+1][j] + 1, dp[i][j+1] + 1));
        }
    }
    
    cout << dp[N][M] << endl;
    return 0;
}





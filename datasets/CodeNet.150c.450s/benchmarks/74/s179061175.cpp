/////////////////////////////////////////////////////////////////////////////////
//// SRM 151 DIV 2 500 pt
/////////////////////////////////////////////////////////////////////////////////
#include <string>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector
#include <set>
#include <iomanip>

#define REP(i,n) for(int i=0; i<(int)n; i++)
#define INF 1e9

using namespace std;

template <class T> string tos(T x) {stringstream s; s << x; return s.str();}
template <class T> string tos2(T x, unsigned int digit, const char fillBy) {stringstream s; s << setw(digit) << setfill(fillBy) << x; return s.str();}
//
//class CollectingTokens {
//    string tmp;
//    vector <vector <int>> path[100];
//    //    vector <int> T_A;
//    //    vector <int> T_B;
//    //    int T_tokens[105];
//    //    int done[105];
//    //    int memo[105];
//    //    int max_value;
//    int dp[100][100];
//    int N, L;
//public:
//    
//    int dfs(int cur, int flg) {
//        //        cout << cur << endl;
//        if (dp[cur][flg] >= 0)
//            return dp[cur][flg];
//        if ((flg == ((0x01 << N) - 1)) && (cur == 0))
//            return 0;
//        int ret = INF;
//        for (int i = 0; i < path[cur].size(); i++) {
//            int next = path[cur][i][0];
//            if ((flg & (0x01 << next)) > 0) continue;
//            int cost = path[cur][i][1];
//            ret = min(ret, dfs(next, flg | (0x01 << next))+cost);
//        }
//        //        cout << cur << " ret: " << ret << endl;
//        dp[cur][flg] = ret;
//        return ret;
//    }
//    
//    int maxTokens(int node_num, int line_num, vector <int> A, vector <int> B, vector <int> tokens) {
//        //        for (int i = 0; i < 100; i++) {
//        //            for (int j = 0; j < 100; j++) {
//        //                dp[i][j] = -1;
//        //            }
//        //        }
//        memset(dp, -1, sizeof(dp));
//        N = node_num;
//        L = line_num;
//        for (int i = 0; i < A.size(); i++) {
//            path[A[i]].push_back({B[i], tokens[i]});
//        }
//        //        for (int i = 0; i < tokens.size(); i++) {
//        //            T_tokens[i+1] = tokens[i];
//        //        }
//        
//        return dfs(0, 0x00);
//    }
//};

///////////////////////////////////////////////////////////////////////////////////

int N, M;
int coin[21];
//int dp[50001];
//int rec(int n) {
//    
//    if (n < 0) {
//        return 50000;
//    }
//    else if (n == 0) {
//        return 0;
//    }
//    
//    if (dp[n] > 0) return dp[n];
//    
//    int ret = INF;
//    REP(i, M) {
//        ret = min(ret, rec(n - coin[i])+1);
//    }
//    return dp[n] = ret;
//}

int main(int argc, const char * argv[]) {
//    std::vector<int> a{0,0,1,2,2,3,4,4};
//    std::vector<int> b{1,3,2,0,3,4,0,1};
//    std::vector<int> c{3,4,5,4,5,3,7,6};
//    CollectingTokens z;
//    cout << z.maxTokens(5, 8, a, b, c);
    //    vector <int> ret = c.digits(3);
    //    for (int i = 0; i < ret.size(); i++) cout << ret[i] << endl;
    
//    memset(dp, -1, sizeof(dp));
    cin >> N >> M;
    REP(i, M) cin >> coin[i+1];
//    cout << rec(N) << endl;
    
    int dp[M+1][N+1];
    REP(i, N+1) dp[0][i] = INF;
    REP(i, M+1) dp[i][0] = 0;
    
    for (int j = 1; j <= M; j++) {
        for (int i = 1; i <= N; i++) {
            if (i-coin[j] >= 0) {
                dp[j][i] = min(dp[j-1][i], dp[j][i-coin[j]]+1);
            }
            else {
                dp[j][i] = dp[j-1][i];
            }
            
//            cout << "dp[" << j << "][" << i << "] = " << dp[j][i] << endl;
        }
    }
    cout << dp[M][N] << endl;
    
    return 0;
}
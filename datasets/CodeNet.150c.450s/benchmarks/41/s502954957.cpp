#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const long long INF = 1e12;

int V, E;

vector< vector<long long> > graph(110, vector<long long>(110, INF));
long long dp[110][110];

int main() {
    cin >> V >> E;
    for(int i = 0; i < E; ++i) {
        long long s, t, d;
        cin >> s >> t >> d;
        graph.at(s).at(t) = d;
    }

    for(int i = 0; i < V; ++i) {
        for(int j = 0; j < V; ++j) {
            if(i == j) dp[i][j] = 0;
            else dp[i][j] = graph.at(i).at(j);
        }
    }

    for(int k = 0; k < V; ++k) {
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(dp[i][k] != INF && dp[k][j] != INF) {
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
                }
            }
        }
    }

    bool flg = true;
    for(int i = 0; i < V; ++i) {
        for(int j = 0; j < V; ++j) {
            if(i == j) {
                if(dp[i][j] < 0) flg = false;
                break;
            }
        }
    }

    if(flg) {
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(j == V-1) {
                    if(dp[i][j] == INF) cout << "INF" << endl;
                    else cout << dp[i][j] << endl;
                }else {
                    if(dp[i][j] == INF) cout << "INF" << " ";
                    else cout << dp[i][j] << " ";
                }
            }
        }
    }else {
        cout << "NEGATIVE CYCLE" << endl;
    }
}

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

struct edge{
    int s, t, d;
};

int main(){
    int n, m, s;
    cin >> n >> m >> s;
    vector<edge> v;
    for(int i = 0; i < m; i++){
        int s, t, d;
        cin >> s >> t >> d;
        v.push_back(edge({s,t,d}));
    }
    vector<int> dp(n, INT_MAX);
    dp[s] = 0;
    for(int i = 1; i < n; i++){
        vector<int> next(n, INT_MAX);
        for(int j = 0; j < m; j++){
            edge e = v[j];
            if(dp[e.s] != INT_MAX)  next[e.t] = min(next[e.t], dp[e.s] + e.d);
        }
        for(int j = 0; j < n; j++)  next[j] = min(next[j], dp[j]);
        dp = next;
    }
    for(int j = 0; j < m; j++){
        edge e = v[j];
        if(dp[e.s] != INT_MAX && dp[e.t] > dp[e.s] + e.d){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        if(dp[i] != INT_MAX)    cout << dp[i] << endl;
        else                    cout << "INF" << endl;
    }
    return 0;
}

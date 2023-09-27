#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int INF = 1e9;
const int MAX_V = 1000;

int cost[MAX_V][MAX_V];
bool used[MAX_V];
int n;

int prim(){
    int res = 0;
    priority_queue<P, vector<P>, greater<P> > q;
    memset(used, false, sizeof(used));
    q.push(P(0, 0));
    while(!q.empty()){
        P p = q.top(); q.pop();
        int v = p.second;
        int d = p.first;
        if(used[v]) continue;
        used[v] = true;
        res += d;
        for(int i = 0; i < n; i++){
            q.push(P(cost[v][i], i));
        }
    }
    return res;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cost[i][j];
            if(cost[i][j] == -1) cost[i][j] = INF;
        }
    }
    cout << prim() << endl;
}

/* verified
https://onlinejudge.u-aizu.ac.jp/#/courses/lesson/1/ALDS1/12/ALDS1_12_A
*/

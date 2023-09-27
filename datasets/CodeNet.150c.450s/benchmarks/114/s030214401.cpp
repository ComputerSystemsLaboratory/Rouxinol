#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

static const int INF = 1e9;
static const int MAX = 100;

int n;
struct edge{int to, cost;};
typedef pair<int, int> P;

int mincost[MAX];
bool used[MAX];
vector< vector<edge> > A(MAX);

int prim(){
    int to, cost, res = 0;
    priority_queue<P, vector<P>, greater<P>> que;
    fill(mincost, mincost + n, INF);
    fill(used, used + n, false);
    mincost[0] = 0;
    que.push(P(0, 0));

    while(!que.empty()){
        P p = que.top(); que.pop();
        if (used[p.second]) continue;
        used[p.second] = true;

        for (int i = 0; i < A[p.second].size(); i++){
            to = A[p.second][i].to;
            cost = A[p.second][i].cost;
            if (used[to]) continue;
            if (mincost[to] > cost){
                mincost[to] = cost;
                que.push(P(mincost[to], to));
            }
        }
    }
    for (int i = 0; i < n; i++) res += mincost[i];
    return res;
}

int main(){
    cin >> n;
    edge x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &x.cost);
            x.to = j;
            if (x.cost != -1) A[i].push_back(x);
        }
    }
    cout << prim() << endl;
    return 0;
}

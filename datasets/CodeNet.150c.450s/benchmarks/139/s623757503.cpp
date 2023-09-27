#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <map>

using namespace std;
using ll = long long;
const int INF = 1001001001;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> G[n];
    for(int i =0 ; i<m;i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(n, INF);
    vector<int> pre(n, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while(!que.empty()){
        int now = que.front();
        que.pop();
        for(int i = 0; i < G[now].size(); i++){
            int next = G[now][i];
            if(dist[next] == INF){
                dist[next] = dist[now] + 1;
                que.push(next);
            }
            if(pre[next] == -1) pre[next] = now;
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i< n ;i++){
        cout << pre[i]+1 << endl;
    }
    return 0;
}
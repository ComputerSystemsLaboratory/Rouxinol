#include<bits/stdc++.h>

using namespace std;
using ll = long long;


int prim(int start, vector<vector<pair<int,int>>> hen) {

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> que;
    que.emplace(0, start);
    vector<int> seen(hen.size());
    int sum = 0;

    while(que.size()) {
        int cost = que.top().first, vert = que.top().second;
        que.pop();
        if(seen[vert])continue;
        seen[vert] = true;
        //処理をする
        sum += cost;

        for(auto i : hen[vert]) {
            if(seen[i.first])continue;
            que.emplace(i.second, i.first);

        }
    }
    return sum;
}


int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> hen(n);
    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        hen[a].emplace_back(b, c);
        hen[b].emplace_back(a, c);
    }
    cout << prim(0, hen) << endl;
}

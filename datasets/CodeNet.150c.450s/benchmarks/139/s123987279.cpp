#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;
    vector<int> a(m), b(m);
    vector<int> rooms(n);
    vector<vector<int>> routes(n, vector<int>(0));

    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        routes[a[i] - 1].push_back(b[i] - 1);
        routes[b[i] - 1].push_back(a[i] - 1);
    }

    vector<int> dist(n, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int current = que.front();
        que.pop();

        int cnCnt = routes[current].size();
        for(int i = 0; i < cnCnt; i++){
            int to = routes[current][i];
            if(dist[to] != -1) continue;

            dist[to] = dist[current] + 1;
            que.push(to);
        }
    }

    vector<vector<int>> depthMap(n, vector<int>(0));
    for(int i =0; i < n; i++){
        if(dist[i] >= 0){
            depthMap[dist[i]].push_back(i);
        }
    }

    bool success = true;
    vector<int> result(n - 1);
    for(int i = 1; i < n; i++){
        vector<int> upper = depthMap[dist[i] - 1];
        if(upper.size() == 0) {
            success = false;
            break;
        }
        for(auto v : routes[i]){
            if(find(upper.begin(), upper.end(), v) != upper.end()){
                result[i - 1] = upper[0];
                break;
            }
        }
    }

    if(success){
        cout << "Yes\n";
        for(auto i : result){
            cout << i + 1 << endl;
        }
    } else {
        cout << "No\n";
    }
    return 0;
}

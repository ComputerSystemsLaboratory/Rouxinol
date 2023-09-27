#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> roadTarget(N+1, vector<int>());
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        roadTarget[a].push_back(b);
        roadTarget[b].push_back(a);
    }

    vector<int> ans(N+1, -1);
    queue<int> que;
    que.push(1);
    while(!que.empty()){
        int room = que.front();
        que.pop();
        vector<int>& target = roadTarget[room];
        for(int i = 0; i < target.size(); i++){
            if(ans[target[i]] == -1){
                ans[target[i]] = room;
                que.push(target[i]);
            }
        }
    }
    bool ok = true;
    for(int i = 2; i <= N; i++){
        if(ans[i] == -1){
            ok == false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
        for(int i = 2; i <= N; i++){
            cout << ans[i] << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
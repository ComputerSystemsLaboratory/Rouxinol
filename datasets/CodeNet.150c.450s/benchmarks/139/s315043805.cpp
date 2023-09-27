#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<int>>road(N);
    for(int i = 0; i < M; i++) {
        int A,B;
        cin >> A >> B;
        A--;B--;
        road[A].push_back(B);
        road[B].push_back(A);
    }
    queue<int> que;
    vector<int>cnt(N,-1);
    cnt[0] = 0;
    que.push(0);
    while(!que.empty()) {
        int x = que.front();
        que.pop();
        for(int i = 0; i < (int)road[x].size(); i++) {
            if(cnt[road[x][i]] == -1) {
                cnt[road[x][i]] = x;
                que.push(road[x][i]);
            }
        }
    }
    bool ok = true;
    for(int i = 0; i < N; i++) {
        if(cnt[i] == -1) {
            ok = false;
        }
    } 
    if(ok) {
        cout << "Yes" << endl;
        for(int i = 1; i < N; i++) {
            cout << cnt[i]+1 << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
}

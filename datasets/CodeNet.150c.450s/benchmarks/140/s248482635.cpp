#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int , int> P;

int main(){
    int V, E;
    cin >> V >> E;

    vector<P> G[V];
    for(int i=0; i<E; i++){
        int s, t, w;
        cin >> s >> t >> w;
        G[s].push_back(make_pair(t, w));
        G[t].push_back(make_pair(s, w));
    }

    int ans = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    bool used[V];
    fill(used, used+V, false);
    q.push(make_pair(0, 0));
    int cnt = 0;
    while(true){
        if(cnt==V) break;
        int now = q.top().second;
        int d = q.top().first;
        q.pop();
        if(used[now]) continue;

        used[now] = true;
        ans += d;
        cnt++;

        for(int i=0; i<G[now].size(); i++){
            int next = G[now][i].first;
            int c = G[now][i].second;
            q.push(make_pair(c, next));
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
        vector<int> v[1005];
        bool used[1005];
        int dis[1005];
        memset(used, 0, sizeof(used));
        memset(dis, -1, sizeof(dis));
        int N ; cin >> N;
        for(int j = 0; j < N; j++){
            int id, t, tmp; cin >> id >> t;
            for (int i = 0; i < t; i++){
                cin >> tmp;
                v[id].push_back(tmp);
                //v[tmp].push_back(id);
            }
        }
        queue<int> q;
        q.push(1);
        used[1] = 1;
        dis[1] = 0;
        while(!q.empty()){
            int k = q.front();
            q.pop();
            for (int x : v[k]){
                if(!used[x]){
                    q.push(x);
                    dis[x] = dis[k] + 1;
                    used[x] = 1;
                }
            }
        }
        for (int i = 1; i <= N; i++)
            cout << i << " " << dis[i] << '\n';

}


#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int find(vector<vector<int>> &frnd, vector<int> &state, int u){
    for (int i = 0; i < frnd[u].size(); i++){
        if (state[frnd[u][i]] == 0){
            return frnd[u][i];
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> frnd(n);
    int s, t;
    for (int i = 0; i < m; i++){
        cin >> s >> t;
        frnd[s].push_back(t);
        frnd[t].push_back(s);
    }
    vector<int> color(n, 0);
    int cl = 1;
    for (int i = 0; i < n; i++){
        stack<int> s;
        //vector<int> state(n, 0);
        if (color[i] == 0){
            s.push(i);
            color[i] = cl;
            //state[i]++;
            while(!s.empty()){
                int v = s.top();

                s.pop();
                for (int j = 0; j < frnd[v].size(); j++){
                    int u = frnd[v][j];
                    if (color[u] == 0){
                        color[u] = cl;
                        s.push(u);
                    }
                }
                /*int nxt = find(frnd, state, v);
                if (nxt != -1){
                    s.push(nxt);
                    color[nxt] = cl;
                    state[nxt]++;
                }
                else{
                    state[v]++;
                    s.pop();
                }*/
            }
        }
        cl++;
    }
    int q;
    cin >> q;
    int a, b;
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        if (color[a] == color[b])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> G[102];
int d[102];

int main()
{
    int n,u,k,v;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> u >> k;
        for(int j = 0; j < k; ++j){
            cin >> v;
            G[u].push_back(v);
        }
    }
    
    fill(d,d + n + 1, -1);
    
    queue<int> que;
    que.push(1);
    d[1] = 0;
    while(!que.empty()){
        int p = que.front(); que.pop();
        for(vector<int>::iterator it = G[p].begin(); it != G[p].end(); ++it){
            if(d[*it] == -1){
                d[*it] = d[p] + 1;
                que.push(*it);
            }
        }
    }
    
    for(int i = 1; i <= n; ++i){
        cout << i << ' ' << d[i] << endl;
    }
}
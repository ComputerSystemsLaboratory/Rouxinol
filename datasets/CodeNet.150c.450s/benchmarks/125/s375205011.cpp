#include <iostream>
#include <vector>
using namespace std;

vector<int> G[102];
int d[102];
int f[102];
bool used[102];


int dfs(int i, int t){
    d[i] = t++;
    used[i] = true;
    for(vector<int>::iterator it = G[i].begin(); it != G[i].end(); ++it){
        if(!used[*it]){
            t = dfs(*it, t);
        }
    }
    
    f[i] = t++;
    return t;
}

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
    int t = 1;
    for(int i = 1; i <= n; ++i){
        if(!used[i]){
            t = dfs(i,t);
        }
    }
    
    for(int i = 1; i <= n; ++i){
        cout << i << ' ' << d[i] << ' ' << f[i] << endl;
    }
}
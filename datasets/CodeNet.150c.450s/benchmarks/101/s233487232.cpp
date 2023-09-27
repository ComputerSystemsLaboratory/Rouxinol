#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int n, m;
stack<int> S;
vector<int> V[100000];
int color[100000];

void dfs(int i, int id){
    S.push(i);
    color[i] = id;

    while(!S.empty()){
        int u = S.top();
        S.pop();
        for(int i=0; i<V[u].size(); i++){
            int v = V[u][i];
            if(color[v]==-1){
                color[v] = id;
                S.push(v);
            }
        }
    }
}

void dfs_init(){

    int id = 1; //グラフの識別
    for(int i=0; i<n; i++){
        color[i] = -1;
    }
    for(int i=0; i<n; i++){
        if(color[i]==-1) dfs(i, id++);
    }
}

int main(){

    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    dfs_init();

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
    int x, y;
    cin >> x >> y;
    if(color[x]==color[y]) cout << "yes" << endl;
    else cout << "no" << endl;
    }

    return 0;
}

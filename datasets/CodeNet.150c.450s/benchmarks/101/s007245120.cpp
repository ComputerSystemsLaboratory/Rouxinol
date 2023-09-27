#include<bits/stdc++.h>
using namespace std;

void dfs(int root, int node, vector<vector<int> >& adjlist, vector<int>& used){

    for(int i = 0; i < adjlist[node].size(); i++){
        if(used[adjlist[node][i]] == -1){
            used[adjlist[node][i]] = root;
            dfs(root, adjlist[node][i], adjlist, used);
        }
    }
}

int main(){

    int n, m; cin >> n >> m;

    vector<vector<int> > adjlist(n);               

    //入力
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;                   // a ←→ b に辺がある
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
        
    }

    vector<int> used(n, -1);

    for(int i = 0; i < n; i++){
        if(used[i] == -1){
            used[i] = i;
            dfs(i, i, adjlist, used);
        }
    }

    /*for(int i = 0; i < n; i++){
        cout << i << " " << used[i] << endl;
    }*/

    //質問
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int a, b; cin >> a >> b;
        
        
        if(used[a] == used[b]) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}

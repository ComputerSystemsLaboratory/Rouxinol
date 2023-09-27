#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void dfs(int node, int group, const vector<vector<int>> & Es, vector<int> & groups){
    if (groups[node] != -1) return;
    groups[node] = group;
    for (auto new_node : Es[node]){
        dfs(new_node, group, Es, groups);
    }
}

void classify(int n, const vector<vector<int>> & Es, vector<int> & groups){
    for (int node = 0; node != n; ++node){
        dfs(node, node, Es, groups);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector< vector<int> > Es(n);
    int s = 0, t = 0;
    for (int i = 0; i != m; ++i){
        cin >> s >> t;
        Es[s].push_back(t);
        Es[t].push_back(s);
    }
    vector<int> groups(n, -1);
    classify(n, Es, groups);
    int q = 0;
    cin >> q;
    for (int i = 0; i != q; ++i){
        cin >> s >> t;
        if (groups[s] == groups[t]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}
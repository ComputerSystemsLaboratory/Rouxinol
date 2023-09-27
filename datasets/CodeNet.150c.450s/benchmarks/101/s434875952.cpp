#include<iostream>
#include<vector>
using namespace std;

const int MAX = 100000, white = 0;
int n, colors[MAX], color = 0;
vector<int> G[MAX];

void dfs(int v){
    colors[v] = color;
    for (int i = 0; i < G[v].size(); i++)
    {
        if (colors[G[v][i]] == white)
        {
            dfs(G[v][i]);
        }
    }
}

void classification(){
    for (int i = 0; i < n; i++)
    {
        if (colors[i] == white)
        {
            color++;
            dfs(i);
        }
    }
}

int main(){
    int m, q;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int s, t;
        cin >> s >> t;
        G[s].emplace_back(t);
        G[t].emplace_back(s);
    }
    classification();
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int s, t;
        cin >> s >> t;
        if (colors[s] == colors[t])
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    
}

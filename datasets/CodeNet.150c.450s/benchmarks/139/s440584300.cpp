#include<bits/stdc++.h>
using namespace std;
const int nax=1000010;
vector<vector<int> > graph(nax , vector<int>()); 
int par[nax]={};

void g_clear()
{
    for (int i=0; i<nax; i++){
        graph[i].clear();
    }
}

void bfs(int source)
{
    queue<int>q;
    q.push(source) ;
    
    par[source] = 1;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            
            if(par[y] == 0){
                par[y] = x;
                q.push(y);
            }
        }
        
    }
    
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);
    
    for(int i=2; i<=node; i++){
        if (0 == par[i]){
            cout << "No" <<endl;
            return 0;
        }
    }
    
    cout << "Yes" <<endl;
    
    for(int i=2; i<=node; i++){
        cout << par[i] <<endl;
    }
    
}
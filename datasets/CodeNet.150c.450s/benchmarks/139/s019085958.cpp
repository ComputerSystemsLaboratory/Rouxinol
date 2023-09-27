#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int ans[N];
int visited[N];
int n, m;
vector<int> graph[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<int> q;
    memset(visited, 0, sizeof(visited));
    q.push(0);
    ans[0] = 0;
    visited[0] = 1;
    int count = 0;
    while(!q.empty()){
        count++;
        int p = q.front();
        q.pop();
        for(int i = 0; i < graph[p].size(); i++){
            if(visited[graph[p][i]] == 0){
                q.push(graph[p][i]);
                ans[graph[p][i]] = p;
                visited[graph[p][i]] = 1;
            }
        }
    }
 //   cout<<count<<endl;
    if(count < n) cout<<"No";
    else
    {
        cout<<"Yes"<<endl;
        for(int i = 1; i < n; i++){
            cout<<ans[i]+1<<endl;
        }
    }
    
    return 0;
}

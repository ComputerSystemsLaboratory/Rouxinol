#include<bits/stdc++.h>
#define endl "\n" 
using namespace std;
#define debug(x) cout<<"The value of "<<#x<<" is "<<x<<endl;
typedef long long ll;
typedef unsigned long long ull;
bool visited[100003];
vector<int>adj[100003];
int parent[100003];
void bfs(){
    visited[1]=true;
    queue<int>qa;
    qa.push(1);
    while(qa.size()){
        int a=qa.front();
        qa.pop();
        for(auto i:adj[a]){
            if(!visited[i]){
                parent[i]=a;
                visited[i]=1;
                qa.push(i);
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(0); cin.tie(0); 
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    parent[i]=0,visited[i]=0;
    bfs();
    for(int i=1;i<=n;i++)
    if(!visited[i]){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i++)
    cout<<parent[i]<<endl;
}

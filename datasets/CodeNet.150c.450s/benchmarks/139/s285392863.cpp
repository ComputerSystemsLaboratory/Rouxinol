#include <bits/stdc++.h>
#define ll long long
#define ar array
#define nl '\n'
#define AC ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
const int M = 1e9+7;
const int N = 1e5;

vector<int> adj[N+5];
int pred[N+5];


int main(){
    AC
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> Q;
    Q.push(1);
    pred[1] = -1;
    int visited = 1;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(int v : adj[cur]){
            if(!pred[v]){
                pred[v] = cur;
                visited++;
                Q.push(v);
            }
        }
    }

    if(visited==n){
        cout<<"Yes"<<endl;
        for(int i=2; i<=n; i++){
            cout<<pred[i]<<endl;
        }
    }
    else
        cout<<"No"<<endl;
}
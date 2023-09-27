// link here :
#include <bits/stdc++.h>
using namespace std;

#define NAME "D"
#define show(x) cout << (#x) << " is " << (x) << endl
#define ll long long
#define ms(arr,val) memset(arr,val,sizeof(arr))
#define len length()

const int maxn = 2e5;

vector< vector<int> >adj;


int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n,m;
    cin>>n>>m;
    adj  = vector< vector<int > >(n+1);
    int u,v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans(n+1,-1);
    vector<int> done(n+1,0);

    queue<int> q;


    q.push(1);

    while(!q.empty()){
        u = q.front();
        q.pop();
        if (done[u]) continue;
        done[u] = 1 ;
        for(auto v : adj[u]){
            if (!done[v]){
                if (ans[v]==-1) ans[v] = u;
                q.push(v);
            }
        }
    }

    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i++) cout<<ans[i]<<endl;
}

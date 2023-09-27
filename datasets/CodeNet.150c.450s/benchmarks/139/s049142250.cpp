
/*
	*	Created By: 'Present_Sir'
	*	Created On: Friday 21 August 2020 11:51:12 AM IST
*/

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long
using namespace std;
const int N = 1e5+5;
vector < int > gr[N];
int vis[N];

void dfs(int cur){
    //cout<<cur<<endl;
    vis[cur] = true;
    for(auto x: gr[cur]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    
    memset(vis,0,sizeof(vis));

    for(int i=0; i<m; ++i){
        int x,y;
        cin>>x>>y;
        //cout<<x<<" "<<y<<endl;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    
    dfs(1);

    for(int i=1; i<=n; ++i){
        if(!vis[i]){
            //cout<<i<<endl;
            cout<<"No"<<endl;
            return;
        }
        vis[i]=0;
    }

    queue<int> q;
    q.push(1);
    
    vector < int >  ans(n+1);
    while(!q.empty()){
        int top = q.front();
        q.pop();

        for(auto x: gr[top]){
            //db(x);
            if(!vis[x]){
                ans[x] = top;
                vis[x] = true;
                q.push(x);
            }
        }
        
    }
    cout<<"Yes"<<endl;
    for(int i=2; i<=n; ++i){
        cout<<ans[i]<<endl;
    }
}

int32_t main(){
    IOS;
    //int t; cin>>t; while(t--)
    {
        solve();
    }
    return 0;
}


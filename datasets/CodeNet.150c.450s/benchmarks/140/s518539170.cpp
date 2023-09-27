#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define mp make_pair
#define pb push_back
#define ll __int64
#define __int64 long long
#define P pair<int,int>
#define PP pair<P,int>

int v,e;
vector<P>G[111111];
bool visit[111111];
int t[111111];
int main() {
    cin>>v>>e;
    rep(i,e){
        int a,b,c;
        cin>>a>>b>>c;
        G[a].pb(mp(b,c));
        G[b].pb(mp(a,c));
    }
    priority_queue<P,vector<P>,greater<P> >q;

    q.push(mp(0,0));

    while(!q.empty()){
        int cost=q.top().first,from=q.top().second;
        q.pop();
        if(visit[from])
            continue;
        visit[from]=1;
        t[from]=cost;
        //cout<<from<<" "<<cost<<endl;
        for(int i=0;i<G[from].size();i++){
            int to=G[from][i].first,next_cost=G[from][i].second;
            q.push(mp(next_cost,to));
        }
    }
    int ans=0;
    rep(i,v)ans+=t[i];
    cout<<ans<<endl;

    return 0;
}


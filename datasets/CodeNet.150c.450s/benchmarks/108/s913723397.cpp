#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define P pair<int,int>
#define PP pair<P,int>
#define fi first
#define se second
#define INF 1e9
#define MOD 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define all(x) (x).begin(),(x).end()
int main(){
    int n;
    cin>>n;
    vector<vector<int> > g(n);
    REP(i,n){
        int a,b;
        cin>>a>>b;
        a--;
        REP(i,b){
            int t;
            cin>>t;
            t--;
            g[a].pb(t);
        }
    }
    vector<int> d(n,INF);
    queue<P> que;
    que.push(P(0,0));
    while(que.size()){
        P p=que.front();que.pop();
        if(p.se>=d[p.fi])continue;
        d[p.fi]=p.se;
        REP(i,g[p.fi].size()){
            que.push(P(g[p.fi][i],p.se+1));
        }
    }
    REP(i,n){
        cout<<i+1<<" ";
        if(d[i]==INF){
            cout<<-1<<endl;
        }else{
            cout<<d[i]<<endl;
        }
    }
    return 0;
}